        int lm;
        if(stoi(arriveAlice.substr(0,2)) > stoi(arriveBob.substr(0,2)))
        {
            am=stoi(arriveBob.substr(0,2))
            am=stoi(arriveBob.substr(3,2))
        }
        else if(stoi(arriveAlice.substr(0,2)) < stoi(arriveBob.substr(0,2)))
        {
            am=stoi(arriveAlice.substr(0,2));
            am=stoi(arriveAlice.substr(3,2));
        }
        else
        {
            am=stoi(arriveAlice.substr(0,2));
            
        }
        
    }
};
