//
//  main.c
//  randomnumber
//
//  Created by Mert Kacir on 22.02.2020.
//  Copyright © 2020 Ömer Kacır. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//Formula:rand() % (max_number + 1 - minimum_number) + minimum_number
void rastgele(int lower,int higher,int tane)
{
    int i;
    for(i = 0;i<tane;i++)
    {
        int sayi=(rand() % (higher + 1 - lower))+ lower ;
        printf("%d\n",sayi);
        
    }
}




int main(int argc, const char * argv[])
{
    int lower=0, higher=50, tane=5;
    rastgele(lower,higher,tane);
    
  
    return 0;
}
