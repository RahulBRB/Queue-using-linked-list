void enqueue(N*f,N*r,int val){
    N*n=(N*)malloc(sizeof(N));
    if(n==NULL)
    printf("Q full");
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }else{
            r->next=n;
            r=n;
    }
}

void dequeue(N*f,N*r){
    int val=-1;
    N*ptr=f;

    f=f->next;
    val=ptr->data;
    free(ptr);
    return val;
    }
