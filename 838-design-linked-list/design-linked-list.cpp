class Node {
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
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
        int cnt = 0;
        while(tmp){
            if(cnt == index)    return tmp->val;
            tmp = tmp->next;
            cnt++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* tmp = new Node(val);
        tmp->next = head;
        head = tmp;
    }
    
    void addAtTail(int val) {
        Node* add = new Node(val);
        if(head == NULL){
            head = add;
            return;
        }
        Node* tmp = head;
        while(tmp->next){
            tmp =tmp->next;
        }
        tmp->next = add;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            return addAtHead(val);
        }
        Node* tmp = head;
        while(tmp != NULL && index>1){
            tmp=tmp->next;
            index--;
        }
        if(tmp == NULL){
            return;
        }
        
        Node* add = new Node(val);
        add->next = tmp->next;
        tmp->next = add;
    }
    
    void deleteAtIndex(int index) {
        if(head == NULL)
            return;
        if(index == 0){
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }
        Node* tmp = head;
        while(tmp != NULL && index > 1){
            tmp=tmp->next;
            index--;
        }
        if(tmp == NULL || tmp->next == NULL){
            return;
        }
        Node* del = tmp->next;
        tmp->next = del->next;
        delete del;
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