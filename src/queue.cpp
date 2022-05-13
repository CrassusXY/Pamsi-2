#include "queue.hh"


Priority_queue::Priority_queue(){
    head = nullptr;
    length = 0;
}


bool Priority_queue::is_empty(){
    return(head==nullptr);

}


uint Priority_queue::size(){
    return length;
}


void Priority_queue::print(){
    std::cout << head->get_message();
}


int Priority_queue::pop(){
    if(!is_empty()){
        Node *tmp = head;               //upomocnicza wartosc wskazuje na to, na co wskazywal do tej pory head
        print();                    
        head = head->get_next();        //ustawiam wskaznik head na nastepny wezel
        delete(tmp);                    //zwalniam pamiec z usunietego wezla
        length--;
        return 0;
    }
    else{
        throw std::logic_error("Queue is empty!");
    }
}


void Priority_queue::pop_all(){
    uint len = size();
    for(uint x=0; x<len; x++){
        pop();
    }
}


int Priority_queue::push(const uint & prio, const char & item){
    Node *add = new Node(prio, item);           //nowy wezel

    Node *tmp = head;                           //wskaznik na element wskazywany przez head
    if(!is_empty()){

        if(tmp->get_priority() > prio){         //przypadek gdy dodawany element ma najmmniejszy priorytet do tej pory
            add->set_next(tmp);
            head = add;
            length++;
            return 0; 
        }

        while(tmp->get_next() != nullptr && tmp->get_next()->get_priority() < prio){     //wstawianie w srodek wezla
            tmp = tmp->get_next();
        }
        add->set_next(tmp->get_next());
        tmp->set_next(add);
        length++;
        return 0;
    }
    else{                                       //przypadek pustej listy, ustawiam next na null, a glowe na nowy wezel
        add->set_next(tmp);
        head = add;
        length++;
        return 0;
    }
    return -1;
}