    int hits = (rand() % ATTACK) + 1;
    while(vecPersonaje[0]->getVida()>0 || vecPersonaje[1]->getVida()>0){
        if(vecPersonaje[0]->getVida() == 0){
            cout<<"Perdiste buscando el tesoro"<<endl;
        }
        else{
            cout<<"Venciste al troll"<<endl;
            cout<<"MUCHAS FELICIDADES EL TESORO ES TUYO"<<endl;
            exit(1);