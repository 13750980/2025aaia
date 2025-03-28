// week06_4a_array_x_y_int_N_for_mousePressed
// 從 week04_5 延伸過來, 利用 for(迴圈) + 陣列, 畫出很多飼料
void setup(){
  size(600, 400);
}
float [] x = new float[100]; // 有100個x和100個y
float [] y = new float[100]; // Java的陣列宣告 
int N = 0; //有 N 個飼料
void draw(){
  background(#C0FFEE);
   for(int i = 0; i < N; i++){
      ellipse(x[i], y[i], 8, 8); 
      y[i] += 2;
   }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++; // 增加 1 顆飼料
}
