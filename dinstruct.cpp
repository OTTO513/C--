#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next, * prev;
};

class List {
public:
    
    Node* head, * tail;
    List();
    void getElem(int p = 0);
    void Del(int p = 0);
    void Insert(int p = 0);
    void Display();
    void addTail(int n);
    void addHead(int n);
    int get_count() {
        return count;
    }
private:
    int count;
};

List::List() {
    head = tail = NULL;
    count = 0;
}
void List::addHead(int n) {
    Node* temp = new Node;
    temp->prev = 0;
    temp->data = n;
    temp->next = head;

    if (head != 0) {
        head->prev = temp;
    }
    if (count == 0) {
        head = tail = temp;
    }
    else {
        head = temp;
    }
    count++;
}

void List::addTail(int n) {
    Node* temp = new Node;
    temp->next = 0;
    temp->data = n;
    temp->prev = tail;

    if (tail != 0) {
        tail->next = temp;
    }


    if (count == 0) {
        head = tail = temp;
    }
    else {
        tail = temp;
    }
    count++;
}

void List::Insert(int p) {
    if (p == 0) {
        cout << "Input position: ";
        cin >> p;
    }

    if (p < 1 || p > count + 1) {
        cout << "Incorrect position !!!" << endl;
        return;
    }

    if (p == count + 1) {
        int data;
        cout << "Input new number: ";
        cin >> data;
        addTail(data);
        return;
    }
    else if (p == 1) {
        int data;
        cout << "Input new number: ";
        cin >> data;
        addHead(data);
        return;
    }

    int i = 1;

    Node* Ins = head;

    while (i < p) {
        Ins = Ins->next;
        i++;
    }

    Node* PrevIns = Ins->prev;

    Node* temp = new Node;

    cout << "Input new number: ";
    cin >> temp->data;

    if (PrevIns != 0 && count != 1)
        PrevIns->next = temp;

    temp->next = Ins;
    temp->prev = PrevIns;
    Ins->prev = temp;

    count++;
}

void List::Del(int p) {
    if (p == 0) {
        cout << "Input position: ";
        cin >> p;
    }

    if (p < 1 || p > count) {
        cout << "Incorrect position!" << endl;
        return;
    }

    int i = 1;
    Node* Del = head;

    while (i < p) {
        Del = Del->next;
        i++;
    }

    Node* PrevDel = Del->prev;
    Node* AfterDel = Del->next;

    if (PrevDel != 0 && count != 1) {
        PrevDel->next = AfterDel;
        if (AfterDel != 0 && count != 1) {
            AfterDel->prev = PrevDel;
        }
    }

    if (p == 1) {
        head = AfterDel;
    }
    if (p == count)
        tail = PrevDel;

    delete Del;

    count--;
}

void List::Display() {
    if (count != 0) {
        Node* temp = head;
        cout << "( ";
        while (temp->next != 0) {
            cout << temp->data << ", ";
            temp = temp->next;
        }

        cout << temp->data << " )" << endl;
    }
}

void List::getElem(int p) {
    if (p == 0) {
        cout << "Input position: ";
        cin >> p;
    }

    if (p < 1 || p > count) {
        cout << "Incorrect position!" << endl;
        return;
    }

    Node* temp;

    if (p <= count / 2) {
        temp = head;
        int i = 1;

        while (i < p) {
            temp = temp->next;
            i++;
        }
    }
    else {
        temp = tail;
        int i = 1;

        while (i <= count - p) {
            temp = temp->prev;
            i++;
        }
    }
    cout << p << " element: " << temp->data << endl;
}

ostream& operator << (ostream& os, List& s) {
    if (s.get_count() != 0) {
        Node* temp = s.head;
        os << "( ";
        while (temp->next != 0) {
            os << temp->data << ", ";
            temp = temp->next;
        }

        os << temp->data << " )" << endl;
    }
    return os;
}

int main() {
    List lst;
    int code;
    cout << "Write type of operation: ";
    cin >> code;
    while (code != 0) {
        switch (code)
        {
        case(1): {
            cout << "Write elem for add to tail: ";
            int elem;
            cin >> elem;
            lst.addTail(elem);
            cout << "Write type of operation: ";
            cin >> code;
            }
               break;

        case(2): {
            cout << "Write elem for add to Head: ";
            int elem;
            cin >> elem;
            lst.addHead(elem);
            cout << "Write type of operation: ";
            cin >> code;
        }
               break;
        case(3): {
           
            lst.Insert();
            cout << "Write type of operation: ";
            cin >> code;
        }
               break;
        case(4): {
           
            lst.Del();
            cout << "Write type of operation: ";
            cin >> code;
        }
               break;
        case(5): {
            
            lst.getElem();
            cout << "Write type of operation: ";
            cin >> code;
        }
               break;
        case(6): {
            cout << "Your list :" << lst << endl;
            cout << "Write type of operation: ";
            cin >> code;
        }
               break;
        default:
            cout << "Write type of operation: ";
            cin >> code;
            break;
        }
    }

}