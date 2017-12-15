#include "lklist.h"

lklist* lklist_create(){
    lklist* list=(lklist*)MEM_CREATE(sizeof(lklist));
    list->val=0;
    list->next=NULL;
    return list;
}

void lklist_set(lklist* list,void* val){
    if(!list){
        list =MEM_CREATE(sizeof(lklist));
        list->val=NULL;
        list->next=NULL;
    }
    
    lklist* temp=list;
    while(temp->next) temp=temp->next;
    
    lklist* node=MEM_CREATE(sizeof(lklist));
    node->val=val;
    node->next=NULL;
    temp->next=node;
}

void lklist_seti(lklist* list,int index,void* val){
    if(!list){
        list =MEM_CREATE(sizeof(lklist));
        list->val=NULL;
        list->next=NULL;
    }
    
    lklist* temp=list;
    int i;
    // while(temp->next) temp=temp->next;
    for(i=0;i<index && temp->next;i++)
        temp=temp->next; 
    
    if(temp->next){
        // temp->next   
        temp->next->val=val;
    }else{
        lklist* node=MEM_CREATE(sizeof(lklist));
        node->val=val;
        node->next=NULL;
        temp->next=node;
    }
}

lklist* lklist_get(lklist* list,int index){
    lklist* temp=list;
    int i;
    for(i=0;i<index && temp->next;i++)
        temp=temp->next; 

    if(i==index)
        return temp;
    else
        return NULL;
}

