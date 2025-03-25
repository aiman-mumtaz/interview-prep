class Node {
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class MyHashSet {
public:
    Node* head;
    MyHashSet() {
        head = NULL;
    }
    
    void add(int key) {
        if(head == NULL){
            Node* newNode = new Node(key);
            head = newNode;
            return;
        }
        if(!contains(key)){        
            Node* newNode = new Node(key);
            Node* tmp = head;
            while(tmp->next){
                tmp = tmp->next;
            }
            tmp->next = newNode;
        }
    }
    
    void remove(int key) {
        if(contains(key)){
            if(head->val == key){
                head = head->next;
                return;
            }
            Node* tmp = head;
            Node* prev = head;
            while(tmp){
                if(tmp->val == key){
                    prev->next = tmp->next;
                    tmp->next= NULL;
                    return;
                }
                prev = tmp;
                tmp = tmp->next;
            }
        }
    }
    
    bool contains(int key) {
        Node* tmp = head;
        while(tmp){
            if(tmp->val == key){
                return true;
            }
            tmp = tmp->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */