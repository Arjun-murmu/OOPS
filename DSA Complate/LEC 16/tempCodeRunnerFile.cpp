  int c = 10;
    int* ptr = &c;
    int ** point_ptr = &ptr;
    cout<<"Dereference operator *(&c): "<< *(&c) <<endl;
    cout<<"Dereference operator *(ptr): "<< *(ptr) <<endl;
