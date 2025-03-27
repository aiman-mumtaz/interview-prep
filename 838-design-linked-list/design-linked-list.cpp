class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    Node(int val,Node* next){
        this->val = val;
        this->next = next;
    }
};
class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        Node* tmp = head;
        while(tmp != NULL){
            index--;
            if(index == -1){
                return tmp->val;
            }
            tmp=tmp->next;
        }
        
        return -1;
        // while(index--){
        //     tmp=tmp->next;
        // }
        // return tmp ? tmp->val : -1;
    }
    
    void addAtHead(int val) {
        head = new Node(val,head);
    }
    
    void addAtTail(int val) {
        if(head == NULL){
            head = new Node(val);
            return;
        }
        Node* tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        Node* newNode = new Node(val);
        tmp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(head == NULL and index == 0){
            head = new Node(val);
            return;
        }
        if(index == 0){
            return addAtHead(val);
        }
        Node* tmp = head;
        int cnt = -1;
        while(tmp != NULL){
           cnt++;
           if(cnt == index - 1){
            Node* newNode = new Node(val,tmp->next);
            tmp->next = newNode;
            return;
           }
            tmp = tmp->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if(head == NULL){
            return;
        }
        if(index == 0){
            Node* tmp = head;
            head = head->next;
            delete tmp;
            return;
        }
        Node* tmp = head;
        Node* prev = NULL;
        int cnt = -1;
        while(tmp != NULL){
            cnt++;
            if(cnt == index){
                prev->next = prev->next->next;
                delete tmp;
                return;
            }
            prev = tmp;
            tmp = tmp->next;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */