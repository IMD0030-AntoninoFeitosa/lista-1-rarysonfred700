#include "function.h"

location_t pt_in_rect(const Ponto &IE, const Ponto &SD, const Ponto &P){
  location_t pt;
  if((P.x <= IE.x && P.x >= SD.x) || (P.x >= IE.x && P.x <= SD.x)){
    if((P.y <= IE.y && P.y >= SD.y) || (P.y >= IE.y && P.y <= SD.y)){
      if((P.x == IE.x) || (P.x == SD.x)){
        pt = BORDER;
      } else{
        pt = INSIDE;  
      }
      if((P.y == SD.y) || (P.y == IE.y)){
        pt = BORDER;
      } else{
        pt = INSIDE;  
      }
    } else{
      pt = OUTSIDE;
    }
  } else{
    pt = OUTSIDE;
  }
  return pt;
}
