//
//  main.c
//  sample_app
//
//  Created by claudiu on 1/31/14.
//  Copyright (c) 2014 claudiu. All rights reserved.
//

#include <stdio.h>

void sayHi(char *student, char *course, int days){
    printf("%s has done  as much: %s into this number of days: %d", student, course, days);
}

int main(int argc, const char * argv[])
{
    int i = 20;
    int j = 10;
    int k = (i > j) ? 10 : 5;
    if (5 < j - k) {
        printf("I do not know");
    } else if (j > i){
        printf("maybe is possible");
    }else{
        printf("stupid");
    }
    sayHi("Claudiu", "Demo", 23);
}

