//
//  Grid.h
//  cppARPG
//
//  Created by Travis Racisz on 2026/03/24.
//

#ifndef Grid_h
#define Grid_h


class Grid {
private:
    int width;
    int height;
    
    
public:
    Grid(int width, int height) {
        this -> width = width;
        this -> height = height;
    }
    
    int getWidth(){
        return this -> width;
    }
    
    int getHeight(){
        return this -> height;
    }
    
    void drawGrid(); 

}; 

#endif // !Grid
