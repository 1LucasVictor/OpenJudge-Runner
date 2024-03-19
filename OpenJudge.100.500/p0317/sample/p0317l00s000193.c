#include <stddef.h>
#include <stdio.h>

void put_int(int n) {
    if(!n) {
        putchar_unlocked('0');
        return;
    }
    if(n < 0) n = -n, putchar_unlocked('-');
    char buf[11];
    int i = 0;
    while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
    while(i--)putchar_unlocked(buf[i]);
}
int get_int() {
    int n = 0;
    int c = getchar_unlocked();
    if(c == 45) {
        c = getchar_unlocked();
        while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
        return -n;
    } else if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
    return n;
}
int get_str(char *str) {
    int c;
    while((c = getchar_unlocked()) > 32) *str++ = (char)c;
    *str = 0;
    return c;
}


#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)
#define container_of(ptr, type, member) ({  \
    void *__mptr = (void *)(ptr);           \
    ((type *)(__mptr - offsetof(type, member))); })

struct rb_node {
    unsigned long __rb_parent_color;
    struct rb_node *rb_right;
    struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));

struct rb_root {
    struct rb_node *rb_node;
};

#define rb_parent(r) ((struct rb_node *)((r)->__rb_parent_color & ~3))
#define RB_ROOT (struct rb_root) { NULL, }
#define RB_EMPTY_NODE(node)  \
   ((node)->__rb_parent_color == (unsigned long)(node))

static inline void rb_link_node(struct rb_node *node, struct rb_node *parent, struct rb_node **rb_link) {
    node->__rb_parent_color = (unsigned long)parent;
    node->rb_left = node->rb_right = NULL;
    *rb_link = node;
}

#define RB_RED      0
#define RB_BLACK    1

#define __rb_color(pc)      ((pc) & 1)
#define __rb_is_red(pc)     (!__rb_color(pc))
#define __rb_is_black(pc)   __rb_color(pc)
#define rb_color(rb)        __rb_color((rb)->__rb_parent_color)
#define rb_is_red(rb)       __rb_is_red((rb)->__rb_parent_color)
#define rb_is_black(rb)     __rb_is_black((rb)->__rb_parent_color)

static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p) {
    rb->__rb_parent_color = rb_color(rb) | (unsigned long)p;
}

static inline void rb_set_parent_color(struct rb_node *rb, struct rb_node *p, int color) {
    rb->__rb_parent_color = (unsigned long)p | color;
}

static inline void __rb_change_child(struct rb_node *old, struct rb_node *new, struct rb_node *parent, struct rb_root *root) {
    if(parent) {
        if(parent->rb_left == old) parent->rb_left = new;
        else parent->rb_right = new;
    } else root->rb_node = new;
}

static inline void rb_set_black(struct rb_node *rb) {
    rb->__rb_parent_color |= RB_BLACK;
}

static inline struct rb_node *rb_red_parent(struct rb_node *red) {
    return (struct rb_node *)red->__rb_parent_color;
}

static inline void __rb_rotate_set_parents(struct rb_node *old, struct rb_node *new, struct rb_root *root, int color) {
    struct rb_node *parent = rb_parent(old);
    new->__rb_parent_color = old->__rb_parent_color;
    rb_set_parent_color(old, new, color);
    __rb_change_child(old, new, parent, root);
}

static inline void rb_insert(struct rb_node *node, struct rb_root *root) {
    struct rb_node *parent = rb_red_parent(node), *gparent, *tmp;

    while(1) {
        // Loop invariant: node is red.
        if(unlikely(!parent)) {
            rb_set_parent_color(node, NULL, RB_BLACK);
            break;
        }
        if(rb_is_black(parent)) break;

        gparent = rb_red_parent(parent);

        tmp = gparent->rb_right;
        if(parent != tmp) {
            if(tmp && rb_is_red(tmp)) {
                rb_set_parent_color(tmp, gparent, RB_BLACK);
                rb_set_parent_color(parent, gparent, RB_BLACK);
                node = gparent;
                parent = rb_parent(node);
                rb_set_parent_color(node, parent, RB_RED);
                continue;
            }

            tmp = parent->rb_right;
            if(node == tmp) {
                tmp = node->rb_left;
                parent->rb_right = tmp;
                node->rb_left = parent;
                if(tmp) rb_set_parent_color(tmp, parent, RB_BLACK);
                rb_set_parent_color(parent, node, RB_RED);
                parent = node;
                tmp = node->rb_right;
            }

            gparent->rb_left = tmp;
            parent->rb_right = gparent;
            if(tmp) rb_set_parent_color(tmp, gparent, RB_BLACK);
            __rb_rotate_set_parents(gparent, parent, root, RB_RED);
            break;
        } else {
            tmp = gparent->rb_left;
            if(tmp && rb_is_red(tmp)) {
                rb_set_parent_color(tmp, gparent, RB_BLACK);
                rb_set_parent_color(parent, gparent, RB_BLACK);
                node = gparent;
                parent = rb_parent(node);
                rb_set_parent_color(node, parent, RB_RED);
                continue;
            }

            tmp = parent->rb_left;
            if(node == tmp) {
                tmp = node->rb_right;
                parent->rb_left = tmp;
                node->rb_right = parent;
                if(tmp) rb_set_parent_color(tmp, parent, RB_BLACK);
                rb_set_parent_color(parent, node, RB_RED);
                parent = node;
                tmp = node->rb_left;
            }
            gparent->rb_right = tmp;
            parent->rb_left = gparent;
            if(tmp) rb_set_parent_color(tmp, gparent, RB_BLACK);
            __rb_rotate_set_parents(gparent, parent, root, RB_RED);
            break;
        }
    }
}

struct rb_node *rb_first(const struct rb_root *root) {
    struct rb_node *n;
    n = root->rb_node;
    if(!n) return NULL;
    while(n->rb_left) n = n->rb_left;
    return n;
}

struct rb_node *rb_next(const struct rb_node *node) {
    struct rb_node *parent;
    if(RB_EMPTY_NODE(node)) return NULL;

    if(node->rb_right) {
        node = node->rb_right;
        while(node->rb_left) node = node->rb_left;
        return (struct rb_node *)node;
    }

    while((parent = rb_parent(node)) && node == parent->rb_right) node = parent;

    return parent;
}

struct mynode {
    struct rb_node node;
    int key;
};

struct rb_root mytree = RB_ROOT;

struct mynode *my_search(struct rb_root *root, int key) {
    struct rb_node *node = root->rb_node;

    while(node) {
        struct mynode *data = container_of(node, struct mynode, node);
        int result = key == data->key ? 0 : key < data->key ? -1 : 1;

        if(result < 0) node = node->rb_left;
        else if(result > 0) node = node->rb_right;
        else return data;
    }
    return NULL;
}

int my_insert(struct rb_root *root, struct mynode *data) {
    struct rb_node **new = &(root->rb_node), *parent = NULL;

    while(*new) {
        struct mynode *this = container_of(*new, struct mynode, node);
        int result = data->key == this->key ? 0 : data->key < this->key ? -1 : 1;

        parent = *new;
        if(result < 0) new = &((*new)->rb_left);
        else if(result > 0) new = &((*new)->rb_right);
        else return -1;
    }
    rb_link_node(&data->node, parent, new);
    rb_insert(&data->node, root);
    return 0;
}

void my_print_inorder(struct rb_root *root) {
    struct rb_node *node;
    for(node = rb_first(root); node; node = rb_next(node)) {
        putchar_unlocked(' ');
        put_int(container_of(node, struct mynode, node)->key);
    }
}

void my_print_preorder(struct rb_node *node) {
    if(!node) return;

    putchar_unlocked(' ');
    put_int(container_of(node, struct mynode, node)->key);

    my_print_preorder(node->rb_left);
    my_print_preorder(node->rb_right);
}

int main(int argc, char **argv) {
    int m = get_int();
    struct mynode node[m];
    char str[8];
    for(int i = 0; i < m; ++i) {
        get_str(str);
        switch(*str) {
        case 'i':
            node[i].key = get_int();
            my_insert(&mytree, node + i);
            break;
        case 'f':
            puts(my_search(&mytree, get_int()) ? "yes" : "no");
            break;
        default:
            my_print_inorder(&mytree);
            putchar_unlocked('\n');
            my_print_preorder(mytree.rb_node);
            putchar_unlocked('\n');
            break;
        }
    }
    return 0;
}


