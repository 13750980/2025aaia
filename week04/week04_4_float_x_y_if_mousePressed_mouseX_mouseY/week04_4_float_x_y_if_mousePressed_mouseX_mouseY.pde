// week04_4_float_x_y_if_mousePressed_mouseX_mouseY
void setup(){
  size(600, 400);
}
float x = 300, y = 200;

void draw(){
  background(#C0FFEE);
  ellipse(x, y, 8, 8);
  if(mousePressed){ //如果 mouse 按下去
    x = (x*20 + mouseX)/21; //放到中間
    y = (y*20 + mouseY)/21; //放到中間
  }
}
