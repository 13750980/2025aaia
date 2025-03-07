// week03_4_processing_if_mousePressed_background
// File - Preference - Font 36
void setup(){
  size(400, 400); //開啟400x400的視窗
}  

void draw(){
  if(mousePressed) 
    background(255, 0, 255);
  else
    background(0, 255, 0);
}
