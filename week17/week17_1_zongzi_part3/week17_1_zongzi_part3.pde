// week17_3_zongzi_part3
// 修改至 week17_2_zongzi_part2
// 等於結合 week04 week10 和現在 week06 陣列
// 1. 記得把 zongzi.png 拉到程式裡
// 2. 再把 week17_2 的程式, 貼進來

PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png"); // 剛剛有把圖檔拉進程式裡
}
//float x, y; // 只有 1 顆粽子的座標
float[]x = new float[100]; //可放100個粽子
float[]y = new float[100]; //week06 陣列
int N = 0; // 一開始有 0 個粽子
void draw(){
  background(204); // 204=灰色
  imageMode(CENTER); // 畫圖, 圖片的座標, 把它設在中心點的座標, 不要用左上角
  for(int i=0; i<N; i++){
    if(x[i]>0){ // 按下 mouse 會設定 x ,y 就不會是 0 , 才畫出來
      image(zongzi, x[i], y[i], 100, 100); // 把粽子, 畫在 x, y 的座標
      y[i]++; // 座標往下, 代表粽子往下
    }
  }
}
void mousePressed(){ // 使用 week04 的餵飼料的方法, 讓粽子往下掉
  x[N] = mouseX;
  y[N] = mouseY;
  N++; 
}
