// week17_1_zongzi_part1
// 家 : 安裝 Processing 4.4.4 新版
// 教室 : 可用舊版的
// 補 week15 端午節的粽子的小遊戲 week04 week06 week10
// 修改至 week04_5_fishX_fishY_dx_dy_dist
// 修改至 week06_4b_array_x_y_int_N_for_mousePressed_recycle_for_k
// 修改至 week10_1_bubble_happy_part2
// https://github.com/jsyeh/2025aaia 可下載全部的程式
// 要把粽子的圖片 zongzi.png , 拉到程式裡

PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png"); // 剛剛有把圖檔拉進程式裡
}
void draw(){
  background(204); // 204=灰色
  imageMode(CENTER); // 畫圖,圖片的座標, 把它設在中心點的座標, 不要用左上角
  //image(zongzi, 0, 0); // 好大的粽子 1024x1024 , 畫小一點
  //image(zongzi, 0, 0, 100, 100); // 在 0,0 座標, 畫出 100x100 的粽子 
  //rect(mouseX, mouseY, 100, 100);
  image(zongzi, mouseX, mouseY, 100, 100); // 把粽子, 畫在 mouse 的座標
}
