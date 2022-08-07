for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(area[j]>area[j+1])     
            {
                int temp=area[j];
                area[j]=area[j+1];
                area[j+1]=temp;
                //swapping struct
                //A
                temp=tr[j].a;
                tr[j].a=tr[j+1].a;
                tr[j+1].a=temp;
                //B
                temp=tr[j].b;
                tr[j].b=tr[j+1].b;
                tr[j+1].b=temp;
                //C
                temp=tr[j].c;
                tr[j].c=tr[j+1].c;
                tr[j+1].c=temp;
            }
        }
    }
}

for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1; j++){
            if(area[i]>area[i+1]){
                int tmp;
                tmp = area[i];
                area[i] = area[i+1];
                area[i+1]=tmp;
                //Swapping areas
                tmp=tr[j].a;
                tr[j].a=tr[j+1].a;
                tr[j+1].a=tmp;
                tmp=tr[j].b;
                tr[j].b=tr[j+1].b;
                tr[j+1].b=tmp;
                tmp=tr[j].c;
                tr[j].c=tr[j+1].c;
                tr[j+1].c=tmp;
                
                
            }
        }
    }
}
