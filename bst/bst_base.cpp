

struct Node{
    Node* left;
    Node* right;
    Node* parent;
    int key;
}


Node* remove_node(Node* element, int key){
    if(element->left == NULL){
        if(element->right == NULL){
            if(element->parent->right) == element{
                element->parent->right = NULL;
            }else{
                element->parent->left = NULL;
            }
            delete element;
            return NULL;
        }else{
            if(element->parent->right == element){
                element->parent->right = element->right;
            }    
            else{
                element->parent->left = element->right;
            }
            element->right->parent = element->parent;
            delete element;
        }else if

    }
}

Node* find_min(Node* root){
    if(root != NULL){
        if(root->left) return find_min(root->left);
        return root;
    }
    return NULL;
}

Node* remove_element(Node* root, int key){
    if(root == NULL) return NULL;
    if(root->key == key){
        if(root->left == NULL){
            Node* child = root->right;
            delete root;
            return child;
        }
        if(root->right == NULL){
            Node* child = node->left;
            delete root;
            return child;
        }else{
            // Root has left and right, so next after root is minimum in right subtree
            root->key2 = find_min(root->right)->key;
            remove_element(root->right, key);
            return root;
        }
    }else{
        if(root->key < key){
            node->right = remove_element(root->right, key);
        }else{
            node->left = remove_element(root->left, key);
        }
    }
    return root;
}

Node* find_next(Node* current){
    int key = current->key;
    if(current->right != NULL){
        return find_min(current->right);
    }else{
        Node* parent = current->parent;
        Node* child = current;
        while(parent != NULL){
            if(parent->right == child){
                parent = parent->parent;
                child = child->parent;
            }
            else{
                return parent;
            }
        }
    }
    return NULL;
}