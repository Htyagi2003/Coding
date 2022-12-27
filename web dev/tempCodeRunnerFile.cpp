
         int min=arr[0];
       for(int j=0;j<m;j++){
        if(min>arr[j]){
        min=arr[j];    
    }
       }
        
        for(int i=0;i<m;i++){
            
             b=arr[i]-min+b;
        }
        cout<<b<<endl;
        t++;
    }
    return 0;
}