#include <stdio.h>

int main()
{
    int rows=4, cols=4;
    int prev_index1, cur_index1, prev_index2, cur_index2;
    int index1=0, index2=0;
    int wall_hit_counter=0;
    int safe_counter=3;
    int infected_counter=0;
    char city[4][4]={
        {'*', '*', '*', '*'},
        {'*', '.', 'a', '*'},
        {'*', 'a', 'c', '*'},
        {'*', '*', '*', '*'}
    };
    
    // Entering the elements of the city
    
    // printf("\nEnter the pattern of the city...\n");
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         printf("\nEnter the character at index [%d][%d]: ", i, j);
    //         scanf("%c", &city[i][j]);
    //     }
    // }
    
    // Initiating attack towards south-east direction
    
    printf("\n%d  %d", index1, index2);
    prev_index1=index1;
    prev_index2=index2;
    index1++;
    index2++;
    cur_index1=index1;
    cur_index2=index2;
    printf("\n%d  %d", index1, index2);
    
    while(wall_hit_counter<2||(index1==(rows-1)&&index2==(cols-1))||(index1==(rows-1)&&index2==0)||(index1==0&&index2==(cols-1))){
        
        
        
        
        if((cur_index1==(prev_index1+1)) && (cur_index2==(prev_index2+1))){
            prev_index1=index1;
            prev_index2=index2;
        // Attack from south-east
        
        if(city[index1][index2]=='a'){
            city[index1][index2]='-';
            index1--;
            index2++;
            safe_counter--;
            infected_counter++;
        } else if(city[index1][index2]=='c'){
            city[index1][index2]='-';
            index1++;
            index2--;
            safe_counter--;
            infected_counter++;
        } else if((city[index1][index2]=='.')||(city[index1][index2]=='-')){
            index1++;
            index2++;
        } else if(city[index1][index2]=='*'){
            wall_hit_counter++;
            if(index1==(rows-1)){
                index1--;
                index2++;
            } else if(index2==(cols-1)){
                index1++;
                index2--;
            } else{}
            
        }
        cur_index1=index1;
        cur_index2=index2;
        printf("\n%d  %d", index1, index2);
        
    } else if((cur_index1==(prev_index1-1)) && (cur_index2==(prev_index2+1))){
        prev_index1=index1;
        prev_index2=index2;
        
        // Attack from north-east
        
        if(city[index1][index2]=='a'){
            city[index1][index2]='-';
            index1--;
            index2--;
            safe_counter--;
            infected_counter++;
        } else if(city[index1][index2]=='c'){
            city[index1][index2]='-';
            index1++;
            index2++;
            safe_counter--;
            infected_counter++;
        } else if((city[index1][index2]=='.')||(city[index1][index2]=='-')){
            index1--;
            index2++;
        } else if(city[index1][index2]=='*'){
            wall_hit_counter++;
            if(index1==0){
                index1++;
                index2++;
            } else if(index2==(cols-1)){
                index1--;
                index2--;
            } else{}
        }
        
        cur_index1=index1;
        cur_index2=index2;
        printf("\n%d  %d", index1, index2);
        
    } else if((cur_index1==(prev_index1+1)) && (cur_index2==(prev_index2-1))){
        prev_index1=index1;
        prev_index2=index2;
        
        // Attack from south-west
        
        if(city[index1][index2]=='a'){
            city[index1][index2]='-';
            index1++;
            index2++;
            safe_counter--;
            infected_counter++;
        } else if(city[index1][index2]=='c'){
            city[index1][index2]='-';
            index1--;
            index2--;
            safe_counter--;
            infected_counter++;
        } else if((city[index1][index2]=='.')||(city[index1][index2]=='-')){
            index1++;
            index2--;
        } else if(city[index1][index2]=='*'){
            wall_hit_counter++;
            if(index1==(rows-1)){
                index1--;
                index2--;
            } else if(index2==0){
                index1++;
                index2++;
            } else{}
        }
        
        cur_index1=index1;
        cur_index2=index2;
        printf("\n%d  %d", index1, index2);
        
    } else if((cur_index1==(prev_index1-1)) && (cur_index2==(prev_index2-1))){
        prev_index1=index1;
        prev_index2=index2;
        
        // Attack from north-west
        
        if(city[index1][index2]=='a'){
            city[index1][index2]='-';
            index1++;
            index2--;
            safe_counter--;
            infected_counter++;
        } else if(city[index1][index2]=='c'){
            city[index1][index2]='-';
            index1--;
            index2++;
            safe_counter--;
            infected_counter++;
        } else if((city[index1][index2]=='.')||(city[index1][index2]=='-')){
            index1--;
            index2--;
        } else if(city[index1][index2]=='*'){
            wall_hit_counter++;
            if(index1==0){
                index1--;
                index2++;
            } else if(index2==0){
                index1--;
                index2++;
            } else{}
        }
        
        cur_index1=index1;
        cur_index2=index2;
        printf("\n%d  %d", index1, index2);
    } else{}
        
        
        
        
    }
    
    printf("\n %d, %d", safe_counter, infected_counter);
    

    return 0;
}