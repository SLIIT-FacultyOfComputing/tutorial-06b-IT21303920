#include "Box.h"

// Implement setters and getters
void Box :: setlength(int len){
  
    length = len ;

}
int Box :: getLength(){
  
      return length;
}
void Box ::setwidth(int wid){

      width = wid;
}
int Box ::getWidth(){
  
      return width;
  }
void Box ::setheight(int h){
  height = h;
  
}
int Box :: getHeight (){
  
  return height ;
  
}
      
// Implemenet the calcVolume() unction
int Box::calcVolume() {
      return length * width * height;

  
}
