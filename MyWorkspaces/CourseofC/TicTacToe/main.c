#include <stdio.h>




void drawBoard(char board[3][3]){
    
    for(int i=0;i<3;++i){
        
        for(int j=0;j<3;++j){
            
          printf("      %c ",board[i][j]);  
        }
    
     printf("\n");  
    }
    printf("\n");  
}

char markBoard(char board[3][3], char marker){
    
    int selection[2] = {0};
    
    scanf("%d %d",&selection[0],&selection[1]);
    
    while (board[selection[0]-1][selection[1]-1] != '#'){
        
        
     printf("Invalid selection, try again:\n");
     scanf("%d %d",&selection[0],&selection[1]);
        
    }
        
        
       board[selection[0]-1][selection[1]-1] = marker;  
    
    return 0;
    
}

int checkForWin(char board[3][3], int win, _Bool player){
    
      win = 2;
    
    
      for(int i=0;i<3;++i){
          
          if ((board[i][0]==board[i][1])&&(board[i][1]==board[i][2])&&(board[i][0]!='#')){
          win = 1;}
          
        
        for(int j=0;j<3;++j){
            
             if ((board[0][j]==board[1][j])&&(board[1][j]==board[2][j])&&(board[0][j]!='#')){
             win = 1;}
             
             if ((board[i][j]=='#')&&(win != 1)){
                 win = 0;}
                 
            
        }
    
      }
       
       if ((board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!='#')||(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!='#')){
       win = 1;}
       
       
       switch (win){
           
           case 1: 
                    if(player == 0){
                    printf("\n PLAYER 2 WINS !!!!!!\n");  
           
                    }else{
                    printf("\n PLAYER 1 WINS !!!!!!\n");  
                    }

                   break;
                   
           case 2: 
                   printf("\n--------IT IS A TIE----------\n");
                   break;
           default:
                   break;
           
           }
       
       
    
      return win;
    
}



int main()
{
    char board[3][3] = { {'#','#','#'},{'#','#','#'},{'#','#','#'}};
    
    char marker = 'x';
    
    _Bool player = 0; // 0 for player 1 and 1 for player 2
    int win = 0; // 0 no win 1 win 2 draw
    
    printf("\n  WELCOME TO THE TIC-TAC-TOE GAME\n\n");
    
    
    while(win == 0){
        
        drawBoard(board);
        
        if(player == 0){
           printf("  Player 1, select coordinates\n  ");  
           player = !player;
           marker = 'x';
           
        }else{
           printf("  Player 2, select coordinates\n  ");  
           player = !player;
           marker = 'o';
        }

        markBoard( board,  marker);
        
        win = checkForWin(board,win,player);
       
        
    }
    
    

	return 0;
}
