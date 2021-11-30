int adiff(int x,int y){
  int c;
  x %= 360,y %= 360;
  if (x<0){x += 360;}
  if (y<0){y += 360;}
  if (x>y){c = x-y;}
  else{c = y-x;}
  if (c > 180){
      c = 360-c;
  }
  return c;
}