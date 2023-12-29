/*const int clock_pin = 7; // SH_CP
const int latch_pin = 8; // ST_CP
const int data_pin = 9; // DS
int layers[4] = {0, 1, 2, 3};
*/


const int latch_pin = 9; // ST_CP
const int clock_pin = 8; // SH_CP
const int data_pin = 7; // DS
int layers[4] = {1, 2, 3, 0};

int matrix[4][16] = {
                      {0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
                    };


int brightness = 2000;

void setup() 
{
  Serial.begin(9600);
  pinMode(latch_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);
  pinMode(data_pin, OUTPUT);
  for(int i = 0; i < 4; i++){
    pinMode(layers[i], OUTPUT);
  }
}

/***************************************************/

void loop() {
  /*
  matrix[0][0] =  1;
  matrix[0][1] =  0;
  matrix[0][2] =  0;
  matrix[0][3] =  0;
  matrix[0][4] =  1;
  matrix[0][5] =  0;
  matrix[0][6] =  0;
  matrix[0][7] =  0;
  matrix[0][8] =  1;
  matrix[0][9] =  0;
  matrix[0][10] = 0;
  matrix[0][11] = 0;
  matrix[0][12] = 1;
  matrix[0][13] = 0;
  matrix[0][14] = 0;
  matrix[0][15] = 0;

  matrix[1][0] =  0;
  matrix[1][1] =  0;
  matrix[1][2] =  0;
  matrix[1][3] =  1;
  matrix[1][4] =  0;
  matrix[1][5] =  0;
  matrix[1][6] =  0;
  matrix[1][7] =  1;
  matrix[1][8] =  0;
  matrix[1][9] =  0;
  matrix[1][10] = 0;
  matrix[1][11] = 1;
  matrix[1][12] = 0;
  matrix[1][13] = 0;
  matrix[1][14] = 0;
  matrix[1][15] = 1;

  matrix[2][0] =  1;
  matrix[2][1] =  1;
  matrix[2][2] =  1;
  matrix[2][3] =  1;
  matrix[2][4] =  0;
  matrix[2][5] =  0;
  matrix[2][6] =  0;
  matrix[2][7] =  0;
  matrix[2][8] =  0;
  matrix[2][9] =  0;
  matrix[2][10] = 0;
  matrix[2][11] = 0;
  matrix[2][12] = 0;
  matrix[2][13] = 0;
  matrix[2][14] = 0;
  matrix[2][15] = 0;

  matrix[3][0] =  0;
  matrix[3][1] =  0;
  matrix[3][2] =  0;
  matrix[3][3] =  0;
  matrix[3][4] =  0;
  matrix[3][5] =  0;
  matrix[3][6] =  0;
  matrix[3][7] =  0;
  matrix[3][8] =  0;
  matrix[3][9] =  0;
  matrix[3][10] = 0;
  matrix[3][11] = 0;
  matrix[3][12] = 1;
  matrix[3][13] = 1;
  matrix[3][14] = 1;
  matrix[3][15] = 1;

  multiplex(300000);
  */
  
  /*
  unsigned long duration = 250000;
  for(int i=0; i<100; i++){
    flicker();
  }
  for(int i=0; i<6; i++){
    muster();
  }

  random_on_all();
  multiplex(500000);
  random_off_all();
  clear_matrix();
  multiplex(500000);

  for(int i=0; i<2; i++){
    spirale();
  }

  box_pattern();

  for(int i=0; i<6; i++){
    resize();
  }

  for(int i=0; i<4; i++){
    propeller();
  }

  for(int i=0; i<40; i++){
    cube_blink(duration);
    duration = duration - (duration / 10);
  }
  duration = 250000;

  for(int i=0; i<2; i++){
    roundabout_x();
  }

  for(int i=0; i<3; i++){
      rundumenand(1);
  }
  for(int i=0; i<3; i++){
      rundumenand(2);
  }
  for(int i=0; i<3; i++){
      rundumenand(3);
  }
  for(int i=0; i<3; i++){
      rundumenand_double(1);
  }
  for(int i=0; i<3; i++){
      rundumenand_double(2);
  }
  for(int i=0; i<3; i++){
      rundumenand_double(3);
  }

  for(int i=0; i<3; i++){
    mini_snake();
  }

  for(int i=0; i<5; i++){
    wand_focus();
  }

  for(int i=0; i<20; i++){
    rand_wand();
  }

  for(int i=0; i<5; i++){
    wave();
  }
  clear_matrix();

  quer(1, 'x', 0, 'r', 'd');
  quer(0, 'x', 0, 'r', 'd');
  quer(1, 'y', 0, 'l', 'u');
  quer(0, 'y', 0, 'l', 'u');
  quer(1, 'x', 3, 'l', 'd');
  quer(0, 'x', 3, 'l', 'd');
  quer(1, 'y', 3, 'r', 'u');
  quer(0, 'y', 3, 'r', 'u');

  for(int i=0; i<4; i++)
  {
    quer(1, 'z', i, 'r', 'd');
    quer(0, 'z', i, 'l', 'd');
  }

  clear_matrix();


  for(int i=0; i<3; i++)
  {
    cross_lines_x_1();
  }
  for(int i=0; i<3; i++)
  {
    cross_lines_y_1();
  }
  for(int i=0; i<3; i++)
  {
    cross_lines_z_1();
  }

  checkitout();

  for(int i=0; i<3; i++)
  {
    double_race();
  }

  for(int i=0; i<6; i++)
  {
    run_baby();    
  }

  for(int i=0; i<3; i++)
  {
    vorhang1();    
  }
  for(int i=0; i<3; i++)
  {
    vorhang2();    
  }
  for(int i=0; i<3; i++)
  {
    vorhang3();    
  }

  for(int i=0; i<4; i++)
  {
    welle();
  }

  rad();

  for(int i=0; i<3; i++)
  {
    fade_cube();
  }

  for(int i=0; i<2; i++)
  {
    rain();
  }

  flip_diagonal();

  for(int i=0; i<2; i++)
  {
    diagonal();
  }

  for(int i=0; i<3; i++)
  {
    klappwand();
  }


  */


    box(0,2);
  multiplex(200000);
  clear_matrix();


}
/*************************************/


void klappwand()
{
  unsigned long duration = 90000;

  line_y(0,0);
  line_y(0,1);
  line_y(0,2);
  line_y(0,3);
  multiplex(duration);
  clear_matrix();

  line_y(1,0);
  line_y(0,1);
  line_y(0,2);
  line_y(0,3);
  multiplex(duration);
  clear_matrix();

  line_y(2,0);
  line_y(1,1);
  line_y(0,2);
  line_y(0,3);
  multiplex(duration);
  clear_matrix();

  line_y(3,0);
  line_y(2,1);
  line_y(1,2);
  line_y(0,3);
  multiplex(duration);
  clear_matrix();

  line_y(3,1);
  line_y(2,1);
  line_y(1,2);
  line_y(0,3);
  multiplex(duration);
  clear_matrix();

  line_y(3,2);
  line_y(2,2);
  line_y(1,2);
  line_y(0,3);
  multiplex(duration);
  clear_matrix();

  //////////////////////////////////

  line_x(3,3);
  line_x(2,3);
  line_x(1,3);
  line_x(0,3);
  multiplex(duration);
  clear_matrix();

  line_x(3,2);
  line_x(2,3);
  line_x(1,3);
  line_x(0,3);
  multiplex(duration);
  clear_matrix();

  line_x(3,1);
  line_x(2,2);
  line_x(1,3);
  line_x(0,3);
  multiplex(duration);
  clear_matrix();

  line_x(3,0);
  line_x(2,1);
  line_x(1,2);
  line_x(0,3);
  multiplex(duration);
  clear_matrix();

  line_x(2,0);
  line_x(2,1);
  line_x(1,2);
  line_x(0,3);
  multiplex(duration);
  clear_matrix();

  line_x(1,0);
  line_x(1,1);
  line_x(1,2);
  line_x(0,3);
  multiplex(duration);
  clear_matrix();

  //////////////////////////////////

  line_z(0,0);
  line_z(1,0);
  line_z(2,0);
  line_z(3,0);
  multiplex(duration);
  clear_matrix();

  line_z(0,1);
  line_z(1,0);
  line_z(2,0);
  line_z(3,0);
  multiplex(duration);
  clear_matrix();

  line_z(0,2);
  line_z(1,1);
  line_z(2,0);
  line_z(3,0);
  multiplex(duration);
  clear_matrix();

  line_z(0,3);
  line_z(1,2);
  line_z(2,1);
  line_z(3,0);
  multiplex(duration);
  clear_matrix();

  line_z(1,3);
  line_z(1,2);
  line_z(2,1);
  line_z(3,0);
  multiplex(duration);
  clear_matrix();

  line_z(2,3);
  line_z(2,2);
  line_z(2,1);
  line_z(3,0);
  multiplex(duration);
  clear_matrix();

  //////////////////////////////////

  line_y(3,0);
  line_y(3,1);
  line_y(3,2);
  line_y(3,3);
  multiplex(duration);
  clear_matrix();

  line_y(3,0);
  line_y(3,1);
  line_y(3,2);
  line_y(2,3);
  multiplex(duration);
  clear_matrix();

  line_y(3,0);
  line_y(3,1);
  line_y(2,2);
  line_y(1,3);
  multiplex(duration);
  clear_matrix();

  line_y(3,0);
  line_y(2,1);
  line_y(1,2);
  line_y(0,3);
  multiplex(duration);
  clear_matrix();

  line_y(3,0);
  line_y(2,1);
  line_y(1,2);
  line_y(0,2);
  multiplex(duration);
  clear_matrix();

  line_y(3,0);
  line_y(2,1);
  line_y(1,1);
  line_y(0,1);
  multiplex(duration);
  clear_matrix();

  //////////////////////////////////

  line_x(3,0);
  line_x(2,0);
  line_x(1,0);
  line_x(0,0);
  multiplex(duration);
  clear_matrix();


  line_x(3,0);
  line_x(2,0);
  line_x(1,0);
  line_x(0,1);
  multiplex(duration);
  clear_matrix();

  line_x(3,0);
  line_x(2,0);
  line_x(1,1);
  line_x(0,2);
  multiplex(duration);
  clear_matrix();

  line_x(3,0);
  line_x(2,1);
  line_x(1,2);
  line_x(0,3);
  multiplex(duration);
  clear_matrix();

  line_x(3,0);
  line_x(2,1);
  line_x(1,2);
  line_x(1,3);
  multiplex(duration);
  clear_matrix();

  line_x(3,0);
  line_x(2,1);
  line_x(2,2);
  line_x(2,3);
  multiplex(duration);
  clear_matrix();


  //////////////////////////////////

  line_z(0,3);
  line_z(1,3);
  line_z(2,3);
  line_z(3,3);
  multiplex(duration);
  clear_matrix();

  line_z(0,3);
  line_z(1,3);
  line_z(2,3);
  line_z(3,2);
  multiplex(duration);
  clear_matrix();

  line_z(0,3);
  line_z(1,3);
  line_z(2,2);
  line_z(3,1);
  multiplex(duration);
  clear_matrix();

  line_z(0,3);
  line_z(1,2);
  line_z(2,1);
  line_z(3,0);
  multiplex(duration);
  clear_matrix();

  line_z(0,3);
  line_z(1,2);
  line_z(2,1);
  line_z(2,0);
  multiplex(duration);
  clear_matrix();

  line_z(0,3);
  line_z(1,2);
  line_z(1,1);
  line_z(1,0);
  multiplex(duration);
  clear_matrix();

}



void diagonal()
{
  unsigned long duration = 80000;

  // anzünden 
  clear_matrix();
  // zwei durchläufe, einer zum anzünden, einer zum ablöschen
  for(int z = 1; z >= 0; z--)
  {
    // zehn durchläufe, damit alle LED's angezündet werden können
    for(int a = 1, b = 7, c = 0; c < 10; a++, b--, c++)
    {
      // zuerst alle ebenen (ausser 0) von unten nach oben kopieren
      for(int j = 3; j > 0; j--)
      {
        for(int k = 0; k < 16; k++)
        {
          matrix[j][k] = matrix[j-1][k];
        }
      }

      // 1, 2, 3, 4, 3, 2, 1 durchläufe
      int d = (a <= 4) ? a : b;

      for(int e = 0; e < d; e++)
      {
        int f = (a <= 4) ? ((d-1) + (e*3)) : 15 - ((d-1) + (e*3));
        // anzünden oder ablöschen
        matrix[0][f] = z;
      }
      multiplex(duration);
    }
  }
}



void welle()
{
  unsigned long duration = 80000;
  wand_y(0);
  wand_y(1);
  wand_y(2);
  wand_y(3);
  multiplex(duration);

  matrix[0][0] = 0;
  matrix[0][1] = 0;
  matrix[0][2] = 0;
  matrix[0][3] = 0;
  multiplex(duration);

  matrix[0][4] = 0;
  matrix[0][5] = 0;
  matrix[0][6] = 0;
  matrix[0][7] = 0;
  matrix[1][0] = 0;
  matrix[1][1] = 0;
  matrix[1][2] = 0;
  matrix[1][3] = 0;
  multiplex(duration);

  matrix[0][8] = 0;
  matrix[0][9] = 0;
  matrix[0][10] = 0;
  matrix[0][11] = 0;
  matrix[1][4] = 0;
  matrix[1][5] = 0;
  matrix[1][6] = 0;
  matrix[1][7] = 0;
  matrix[2][0] = 0;
  matrix[2][1] = 0;
  matrix[2][2] = 0;
  matrix[2][3] = 0;
  multiplex(duration);

  matrix[0][12] = 0;
  matrix[0][13] = 0;
  matrix[0][14] = 0;
  matrix[0][15] = 0;
  matrix[1][8] = 0;
  matrix[1][9] = 0;
  matrix[1][10] = 0;
  matrix[1][11] = 0;
  matrix[2][4] = 0;
  matrix[2][5] = 0;
  matrix[2][6] = 0;
  matrix[2][7] = 0;
  matrix[3][0] = 0;
  matrix[3][1] = 0;
  matrix[3][2] = 0;
  matrix[3][3] = 0;
  multiplex(duration);

  matrix[1][12] = 0;
  matrix[1][13] = 0;
  matrix[1][14] = 0;
  matrix[1][15] = 0;
  matrix[2][8] = 0;
  matrix[2][9] = 0;
  matrix[2][10] = 0;
  matrix[2][11] = 0;
  matrix[3][4] = 1;
  matrix[3][5] = 1;
  matrix[3][6] = 1;
  matrix[3][7] = 1;
  multiplex(duration);

  matrix[1][12] = 0;
  matrix[1][13] = 0;
  matrix[1][14] = 0;
  matrix[1][15] = 0;
  matrix[2][12] = 0;
  matrix[2][13] = 0;
  matrix[2][14] = 0;
  matrix[2][15] = 0;
  matrix[3][8] =  1;
  matrix[3][9] =  1;
  matrix[3][10] = 1;
  matrix[3][11] = 1;
  multiplex(duration);

  matrix[3][12] = 0;
  matrix[3][13] = 0;
  matrix[3][14] = 0;
  matrix[3][15] = 0;

  // einschalten

  matrix[3][0] = 1;
  matrix[3][1] = 1;
  matrix[3][2] = 1;
  matrix[3][3] = 1;
  multiplex(duration);

  matrix[2][0] = 1;
  matrix[2][1] = 1;
  matrix[2][2] = 1;
  matrix[2][3] = 1;
  matrix[3][4] = 1;
  matrix[3][5] = 1;
  matrix[3][6] = 1;
  matrix[3][7] = 1;
  multiplex(duration);

  matrix[1][0] = 1;
  matrix[1][1] = 1;
  matrix[1][2] = 1;
  matrix[1][3] = 1;
  matrix[2][4] = 1;
  matrix[2][5] = 1;
  matrix[2][6] = 1;
  matrix[2][7] = 1;
  matrix[3][8] = 1;
  matrix[3][9] = 1;
  matrix[3][10] = 1;
  matrix[3][11] = 1;
  multiplex(duration);

  matrix[0][0] = 1;
  matrix[0][1] = 1;
  matrix[0][2] = 1;
  matrix[0][3] = 1;
  matrix[1][4] = 1;
  matrix[1][5] = 1;
  matrix[1][6] = 1;
  matrix[1][7] = 1;
  matrix[2][8] = 1;
  matrix[2][9] = 1;
  matrix[2][10] = 1;
  matrix[2][11] = 1;
  matrix[3][12] = 1;
  matrix[3][13] = 1;
  matrix[3][14] = 1;
  matrix[3][15] = 1;
  multiplex(duration);

  matrix[0][4] = 1;
  matrix[0][5] = 1;
  matrix[0][6] = 1;
  matrix[0][7] = 1;
  matrix[1][8] = 1;
  matrix[1][9] = 1;
  matrix[1][10] = 1;
  matrix[1][11] = 1;
  matrix[2][12] = 1;
  matrix[2][13] = 1;
  matrix[2][14] = 1;
  matrix[2][15] = 1;
  multiplex(duration);

  matrix[0][8] = 1;
  matrix[0][9] = 1;
  matrix[0][10] = 1;
  matrix[0][11] = 1;
  matrix[1][12] = 1;
  matrix[1][13] = 1;
  matrix[1][14] = 1;
  matrix[1][15] = 1;
  multiplex(duration);
}

void flip_diagonal()
{
  unsigned long duration = 100000;

  for(int j=0; j<2; j++)
  {
    for(int i=0; i<4; i++)
    {
      line_x_diag(i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i=2; i>0; i--)
    {
      line_x_diag(i);
      multiplex(duration);
      clear_matrix();
    }
  }
  for(int j=0; j<2; j++)
  {
    for(int i=0; i<4; i++)
    {
      line_x_diag_2(i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i=2; i>0; i--)
    {
      line_x_diag_2(i);
      multiplex(duration);
      clear_matrix();
    }
  }

  for(int j=0; j<2; j++)
  {
    for(int i=0; i<4; i++)
    {
      line_y_diag(i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i=2; i>0; i--)
    {
      line_y_diag(i);
      multiplex(duration);
      clear_matrix();
    }
  }
  for(int j=0; j<2; j++)
  {
    for(int i=0; i<4; i++)
    {
      line_y_diag_2(i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i=2; i>0; i--)
    {
      line_y_diag_2(i);
      multiplex(duration);
      clear_matrix();
    }
  }


  for(int j=0; j<2; j++)
  {
    for(int i=0; i<4; i++)
    {
      line_z_diag(i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i=2; i>0; i--)
    {
      line_z_diag(i);
      multiplex(duration);
      clear_matrix();
    }
  }
  for(int j=0; j<2; j++)
  {
    for(int i=0; i<4; i++)
    {
      line_z_diag_2(i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i=2; i>0; i--)
    {
      line_z_diag_2(i);
      multiplex(duration);
      clear_matrix();
    }
  }
}


void rain()
{
  unsigned long duration = 170000;
  quer(1, 'z', 0, 'r', 'd');
  multiplex(duration);

  int led = 0;
  int counter = 0;

  while(counter < 16)
  {
    led = random(0, 16);
    if(matrix[0][led] != 0)
    {
      for(int j = 3; j > 1; j--)
      {
        for(int k = 0; k < 16; k++)
        {
          matrix[j][k] = matrix[j-1][k];
          matrix[j-1][k] = 0;
        }
      }
      matrix[0][led] = 0;
      matrix[1][led] = 1;
      multiplex(duration);
      counter++;
    }
  }
  // clean up hanging raindrops
  for(int i = 0; i < 4; i++)
  {
    for(int j = 3; j > 1; j--)
    {
      for(int k = 0; k < 16; k++)
      {
        matrix[j][k] = matrix[j-1][k];
        matrix[j-1][k] = 0;
      }
    }
    multiplex(duration);
  }
}

void fade_cube()
{
  unsigned long duration = 14000;
  wand_y(0);
  wand_y(1);
  wand_y(2);
  wand_y(3);
  float exponent = 1.1;
  int max_brightness = 2000;
  brightness = 1;


  // fade in
  while(brightness < max_brightness)
  {
    brightness = ceil(brightness * exponent);
    multiplex(duration);
  }

  // fade out
  while(brightness > 1)
  {
    brightness = floor(brightness / exponent);
    multiplex(duration);
  }
  clear_matrix();
  brightness = 2000;
}


void rad()
{
  unsigned long duration = 100000;

  for(int j = 0; j < 3; j++)
  {
    for(int i = 0; i < 4; i++)
    {
      line_x(i,0);
      line_x(i,3);
      line_z(3,i);
      line_z(0,i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i = 2; i > 0; i--)
    {
      line_x(i,0);
      line_x(i,3);
      line_z(3,i);
      line_z(0,i);
      multiplex(duration);
      clear_matrix();
    }
  }

  line_x(0,0);
  line_x(0,3);
  line_z(3,0);
  line_z(0,0);
  multiplex(duration);
  clear_matrix();

  line_x(0,3);
  line_x(1,0);
  matrix[1][0] = 1;
  matrix[2][0] = 1;
  matrix[1][3] = 1;
  matrix[2][3] = 1;
  multiplex(duration);
  clear_matrix();

  line_x(0,3);
  line_x(2,0);
  matrix[1][4] = 1;
  matrix[2][0] = 1;
  matrix[1][7] = 1;
  matrix[2][3] = 1;
  multiplex(duration);
  clear_matrix();

  line_x(0,3);
  line_x(3,0);
  matrix[1][8] = 1;
  matrix[2][4] = 1;
  matrix[1][11] = 1;
  matrix[2][7] = 1;
  multiplex(duration);
  clear_matrix();

  line_x(0,3);
  line_x(3,1);
  matrix[1][8] = 1;
  matrix[2][4] = 1;
  matrix[1][11] = 1;
  matrix[2][7] = 1;
  multiplex(duration);
  clear_matrix();

  line_x(0,3);
  line_x(3,2);
  matrix[2][8] = 1;
  matrix[2][4] = 1;
  matrix[2][11] = 1;
  matrix[2][7] = 1;
  multiplex(duration);
  clear_matrix();

  for(int j = 0; j < 3; j++)
  {
    for(int i = 3; i >=0; i--)
    {
      line_x(0,i);
      line_x(3,i);
      line_y(0,i);
      line_y(3,i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i = 1; i < 3; i++)
    {
      line_x(0,i);
      line_x(3,i);
      line_y(0,i);
      line_y(3,i);
      multiplex(duration);
      clear_matrix();
    }
  }

  line_x(0,3);
  line_x(3,3);
  line_y(0,3);
  line_y(3,3);
  multiplex(duration);
  clear_matrix();

  line_y(0,2);
  line_y(3,3);
  matrix[3][13] = 1;
  matrix[3][14] = 1;
  matrix[3][1] = 1;
  matrix[3][2] = 1;
  multiplex(duration);
  clear_matrix();

  line_y(0,1);
  line_y(3,3);
  matrix[2][13] = 1;
  matrix[3][14] = 1;
  matrix[2][1] = 1;
  matrix[3][2] = 1;
  multiplex(duration);
  clear_matrix();

  line_y(0,0);
  line_y(3,3);
  matrix[1][13] = 1;
  matrix[2][14] = 1;
  matrix[1][1] = 1;
  matrix[2][2] = 1;
  multiplex(duration);
  clear_matrix();

  line_y(1,0);
  line_y(3,3);
  matrix[1][13] = 1;
  matrix[2][14] = 1;
  matrix[1][1] = 1;
  matrix[2][2] = 1;
  multiplex(duration);
  clear_matrix();

  line_y(2,0);
  line_y(3,3);
  matrix[1][14] = 1;
  matrix[2][14] = 1;
  matrix[1][2] = 1;
  matrix[2][2] = 1;
  multiplex(duration);
  clear_matrix();


  line_y(3,0);
  line_y(3,3);
  line_z(3,0);
  line_z(3,3);
  multiplex(duration);
  clear_matrix();

  for(int j = 0; j < 3; j++)
  {
    for(int i = 3; i >=0; i--)
    {
      line_y(i,0);
      line_y(i,3);
      line_z(i,0);
      line_z(i,3);
      multiplex(duration);
      clear_matrix();
    }
    for(int i = 1; i < 3; i++)
    {
      line_y(i,0);
      line_y(i,3);
      line_z(i,0);
      line_z(i,3);
      multiplex(duration);
      clear_matrix();
    }
  }

  line_z(3,0);
  line_z(2,3);
  matrix[0][7] = 1;
  matrix[0][11] = 1;
  matrix[3][7] = 1;
  matrix[3][11] = 1;
  multiplex(duration);
  clear_matrix();

  line_z(3,0);
  line_z(1,3);
  matrix[0][7] = 1;
  matrix[0][10] = 1;
  matrix[3][7] = 1;
  matrix[3][10] = 1;
  multiplex(duration);
  clear_matrix();

  line_z(3,0);
  line_z(0,3);
  matrix[0][6] = 1;
  matrix[0][9] = 1;
  matrix[3][6] = 1;
  matrix[3][9] = 1;
  multiplex(duration);
  clear_matrix();

  line_z(3,0);
  line_z(0,2);
  matrix[0][6] = 1;
  matrix[0][9] = 1;
  matrix[3][6] = 1;
  matrix[3][9] = 1;
  multiplex(duration);
  clear_matrix();

  line_z(3,0);
  line_z(0,1);
  matrix[0][6] = 1;
  matrix[0][5] = 1;
  matrix[3][6] = 1;
  matrix[3][5] = 1;
  multiplex(duration);
  clear_matrix();

  for(int j = 0; j < 3; j++)
  {
    for(int i = 0; i < 4; i++)
    {
      line_x(i,0);
      line_x(i,3);
      line_z(3,i);
      line_z(0,i);
      multiplex(duration);
      clear_matrix();
    }
    for(int i = 2; i > 0; i--)
    {
      line_x(i,0);
      line_x(i,3);
      line_z(3,i);
      line_z(0,i);
      multiplex(duration);
      clear_matrix();
    }
  }

}

void vorhang1()
{
  unsigned long duration = 80000;
  int a[12] = {0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 0, 0};
  int b[12] = {0, 0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 0};
  int c[12] = {0, 0, 0, 1, 2, 3, 3, 3, 3, 2, 1, 0};
  int d[12] = {0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 2, 1};

  for(int i = 0; i < 12; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      matrix[0][j*4+a[i]] = 1;
      matrix[1][j*4+b[i]] = 1;
      matrix[2][j*4+c[i]] = 1;
      matrix[3][j*4+d[i]] = 1;
    }
    multiplex(duration);
    clear_matrix();
  }
}
void vorhang2()
{
  unsigned long duration = 80000;
  int a[12] = {0, 4, 8, 12, 12, 12, 12, 8, 4, 0, 0, 0};
  int b[12] = {0, 0, 4, 8, 12, 12, 12, 12, 8, 4, 0, 0};
  int c[12] = {0, 0, 0, 4, 8, 12, 12, 12, 12, 8, 4, 0};
  int d[12] = {0, 0, 0, 0, 4, 8, 12, 12, 12, 12, 8, 4};

  for(int i = 0; i < 12; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      matrix[0][a[i]+j] = 1;
      matrix[1][b[i]+j] = 1;
      matrix[2][c[i]+j] = 1;
      matrix[3][d[i]+j] = 1;
    }
    multiplex(duration);
    clear_matrix();
  }
}
void vorhang3()
{
  unsigned long duration = 80000;
  int a[12] = {0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 0, 0};
  int b[12] = {0, 0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 0};
  int c[12] = {0, 0, 0, 1, 2, 3, 3, 3, 3, 2, 1, 0};
  int d[12] = {0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 2, 1};


  for(int i = 0; i < 12; i++)
  {
    line_y(0, a[i]);
    line_y(1, b[i]);
    line_y(2, c[i]);
    line_y(3, d[i]);
    multiplex(duration);
    clear_matrix();
  }
}

void run_baby()
{
  unsigned long duration = 80000;
  // 1
  matrix[3][3] = 1;
  matrix[3][2] = 1;
  matrix[2][13] = 1;
  matrix[1][12] = 1;
  multiplex(duration);
  clear_matrix();

  // 2
  matrix[3][2] = 1;
  matrix[3][1] = 1;
  matrix[2][14] = 1;
  matrix[1][13] = 1;
  multiplex(duration);
  clear_matrix();

  // 3
  matrix[3][1] = 1;
  matrix[3][0] = 1;
  matrix[2][15] = 1;
  matrix[2][14] = 1;
  multiplex(duration);
  clear_matrix();

  // 4
  matrix[3][1] = 1;
  matrix[2][0] = 1;
  matrix[3][14] = 1;
  matrix[2][15] = 1;
  multiplex(duration);
  clear_matrix();

  // 5
  matrix[2][1] = 1;
  matrix[1][0] = 1;
  matrix[3][15] = 1;
  matrix[3][14] = 1;
  multiplex(duration);
  clear_matrix();

  // 6
  matrix[2][2] = 1;
  matrix[1][1] = 1;
  matrix[3][14] = 1;
  matrix[3][13] = 1;
  multiplex(duration);
  clear_matrix();

  // 7
  matrix[2][3] = 1;
  matrix[2][2] = 1;
  matrix[3][13] = 1;
  matrix[3][12] = 1;
  multiplex(duration);
  clear_matrix();

  // 8
  matrix[3][2] = 1;
  matrix[2][3] = 1;
  matrix[3][13] = 1;
  matrix[2][12] = 1;
  multiplex(duration);
  clear_matrix();
}

void checkitout()
{
  int a[48] = {0, 1, 2, 3,   1, 2, 3, 7,   2, 3, 7, 11,  3, 7, 11, 15, 7, 11, 15, 14,  11, 15, 14, 13,   15, 14, 13, 12,    14, 13, 12, 8,   13, 12, 8, 4,   12, 8, 4, 0,    8, 4, 0, 1,    4, 0, 1, 2};
  int b[48] = {0, 1, 2, 3,   0, 1, 2, 3,   0, 1, 2, 3,   0, 1, 2, 3,   0, 1, 2, 3,     0, 1, 2, 3,       0, 1, 2, 3,        0, 1, 2, 3,       0, 1, 2, 3,    0, 1, 2, 3,     0, 1, 2, 3,    0, 1, 2, 3};

  unsigned long duration = 80000;
  int c = 0;

  for(int i=0; i<3; i++)
  {
    for (int i=0; i<48; i++)
    {
      i < 48/2 ? c = i + (48/2) : c = i - (48/2);
      matrix[b[i]][a[i]] = 1;
      matrix[b[i]][a[i]] = 1;
      matrix[b[i]][a[i]] = 1;
      matrix[b[i]][a[i]] = 1;
      matrix[b[i]][a[c]] = 1;
      matrix[b[i]][a[c]] = 1;
      matrix[b[i]][a[c]] = 1;
      matrix[b[i]][a[c]] = 1;
      if ((i+1) % 4 == 0)
      {
        multiplex(duration);
        clear_matrix();
      }
    }
  }

  matrix[0][0] = 1;
  matrix[1][1] = 1;
  matrix[2][2] = 1;
  matrix[3][3] = 1;

  matrix[0][15] = 1;
  matrix[1][14] = 1;
  matrix[2][13] = 1;
  matrix[3][12] = 1;
  multiplex(duration);
  clear_matrix();


  matrix[0][0] = 1;
  matrix[1][1] = 1;
  matrix[2][2] = 1;
  matrix[3][2] = 1;

  matrix[0][15] = 1;
  matrix[1][14] = 1;
  matrix[2][13] = 1;
  matrix[3][13] = 1;
  multiplex(duration);
  clear_matrix();


  matrix[0][0] = 1;
  matrix[1][1] = 1;
  matrix[2][1] = 1;
  matrix[3][1] = 1;

  matrix[0][15] = 1;
  matrix[1][14] = 1;
  matrix[2][14] = 1;
  matrix[3][14] = 1;
  multiplex(duration);
  clear_matrix();


  matrix[0][0] = 1;
  matrix[1][0] = 1;
  matrix[2][0] = 1;
  matrix[3][0] = 1;

  matrix[0][15] = 1;
  matrix[1][15] = 1;
  matrix[2][15] = 1;
  matrix[3][15] = 1;
  multiplex(duration);
  clear_matrix();



  matrix[0][0] = 1;
  matrix[1][0] = 1;
  matrix[2][0] = 1;
  matrix[3][4] = 1;

  matrix[0][15] = 1;
  matrix[1][15] = 1;
  matrix[2][15] = 1;
  matrix[3][11] = 1;
  multiplex(duration);
  clear_matrix();



  matrix[0][0] = 1;
  matrix[1][0] = 1;
  matrix[2][4] = 1;
  matrix[3][8] = 1;

  matrix[0][15] = 1;
  matrix[1][15] = 1;
  matrix[2][11] = 1;
  matrix[3][7] = 1;
  multiplex(duration);
  clear_matrix();

  int g[48] = {8, 4, 0, 1,    4, 0, 1, 2, 0, 1, 2, 3,   1, 2, 3, 7,   2, 3, 7, 11,  3, 7, 11, 15, 7, 11, 15, 14,  11, 15, 14, 13,   15, 14, 13, 12,    14, 13, 12, 8,   13, 12, 8, 4,   12, 8, 4, 0};
  int h[48] = {3, 2, 1, 0,   3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,    3, 2, 1, 0,   3, 2, 1, 0};

  for(int i=0; i<3; i++)
  {
    for (int i=48-1; i>=0; i--)
    {
      i < 48/2 ? c = i + (48/2) : c = i - (48/2);
      matrix[h[i]][g[i]] = 1;
      matrix[h[i]][g[i]] = 1;
      matrix[h[i]][g[i]] = 1;
      matrix[h[i]][g[i]] = 1;
      matrix[h[i]][g[c]] = 1;
      matrix[h[i]][g[c]] = 1;
      matrix[h[i]][g[c]] = 1;
      matrix[h[i]][g[c]] = 1;
      if ((i) % 4 == 0)
      {
        multiplex(duration);
        clear_matrix();
      }
    }
  }

  matrix[0][0] = 1;
  matrix[1][0] = 1;
  matrix[2][4] = 1;
  matrix[3][8] = 1;

  matrix[0][15] = 1;
  matrix[1][15] = 1;
  matrix[2][11] = 1;
  matrix[3][7] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[1][0] = 1;
  matrix[2][0] = 1;
  matrix[3][4] = 1;

  matrix[0][15] = 1;
  matrix[1][15] = 1;
  matrix[2][15] = 1;
  matrix[3][11] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[1][0] = 1;
  matrix[2][0] = 1;
  matrix[3][0] = 1;

  matrix[0][15] = 1;
  matrix[1][15] = 1;
  matrix[2][15] = 1;
  matrix[3][15] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[1][1] = 1;
  matrix[2][1] = 1;
  matrix[3][1] = 1;

  matrix[0][15] = 1;
  matrix[1][14] = 1;
  matrix[2][14] = 1;
  matrix[3][14] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[1][1] = 1;
  matrix[2][2] = 1;
  matrix[3][2] = 1;

  matrix[0][15] = 1;
  matrix[1][14] = 1;
  matrix[2][13] = 1;
  matrix[3][13] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[1][1] = 1;
  matrix[2][2] = 1;
  matrix[3][3] = 1;
}



void double_race()
{
  unsigned long duration = 50000;
  int a[12] = {0, 5, 10, 15, 15, 15, 15, 10, 5, 0, 0, 0};
  int b[12] = {0, 0, 0,  0,  1,   2,  3,  3,  3, 3, 2, 1};
  int c[12] = {15, 10, 5, 0, 0, 0, 0, 5, 10, 15, 15, 15};
  int d[12] = {3,  3,  3, 3, 2, 1, 0, 0, 0,  0,  1,   2};

  int e[12] = {3, 3, 3, 3, 6, 9, 12, 12, 12, 12, 9, 6};
  int f[12] = {3, 2, 1, 0, 0, 0, 0, 1, 2, 3, 3, 3};
  int g[12] = {12, 12, 12, 12, 9, 6, 3, 3, 3, 3, 6, 9};
  int h[12] = {0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 0, 0};

  for (int i=0; i<12; i++)
  {
    matrix[b[i]][a[i]] = 1;
    matrix[d[i]][c[i]] = 1;
    //matrix[f[i]][e[i]] = 1;
    //matrix[h[i]][g[i]] = 1;
    multiplex(duration);
    clear_matrix();
  }

}

void cross_lines_y_1()
{
  for (int i=0, j=4-1; i<4; i++, j--)
  {
    unsigned long duration = 100000;
    line_y(i, 0);
    line_y(j, 1);
    line_y(i, 2);
    line_y(j, 3);
    multiplex(duration);
    clear_matrix();
  }
  for (int i=2, j=1; i>0; i--, j++)
  {
    unsigned long duration = 100000;
    line_y(i, 0);
    line_y(j, 1);
    line_y(i, 2);
    line_y(j, 3);
    multiplex(duration);
    clear_matrix();
  }
}
void cross_lines_x_1()
{
  for (int i=0, j=4-1; i<4; i++, j--)
  {
    unsigned long duration = 100000;
    line_x(i, 0);
    line_x(j, 1);
    line_x(i, 2);
    line_x(j, 3);
    multiplex(duration);
    clear_matrix();
  }
  for (int i=2, j=1; i>0; i--, j++)
  {
    unsigned long duration = 100000;
    line_x(i, 0);
    line_x(j, 1);
    line_x(i, 2);
    line_x(j, 3);
    multiplex(duration);
    clear_matrix();
  }
}
void cross_lines_z_1()
{
  for (int i=0, j=4-1; i<4; i++, j--)
  {
    unsigned long duration = 100000;
    line_z(i, 0);
    line_z(j, 1);
    line_z(i, 2);
    line_z(j, 3);
    multiplex(duration);
    clear_matrix();
  }
  for (int i=2, j=1; i>0; i--, j++)
  {
    unsigned long duration = 100000;
    line_z(i, 0);
    line_z(j, 1);
    line_z(i, 2);
    line_z(j, 3);
    multiplex(duration);
    clear_matrix();
  }
}

void wave(){
  unsigned long duration = 100000;
  int a[24] = {0, 1, 2, 3,   1, 1, 2, 2,   2, 2, 1, 1,   3, 2, 1, 0,   2, 2, 1, 1,   1, 1, 2, 2};
  int b[24] = {0, 1, 2, 3,   0, 1, 2, 3,   0, 1, 2, 3,   0, 1, 2, 3,   0, 1, 2, 3,   0, 1, 2, 3};

  int counter = 0;
  for (int i=0; i<24; i++)
  {
    if (i % 4 == 0)
    {
      multiplex(duration);
      clear_matrix();
    }
    line_x(b[i], a[i]);
  }
}

void wand_focus(){
  unsigned long duration = 100000;
  for (int i=0; i<3; i++){
    wand_y(i);
    multiplex(duration);
    clear_matrix();
  }
  for (int i=3; i>=1; i--){
    wand_y(i);
    multiplex(duration);
    clear_matrix();
  }
}

void rand_wand(){
  unsigned long duration = 200000;
  int rand_axes1 = random(0, 4);
  int rand_axes2 = random(0, 3);
  if      (rand_axes2 == 0){
    wand_x(rand_axes1);
  }else if(rand_axes2 == 1){
    wand_y(rand_axes1);
  }else if(rand_axes2 == 2){
    wand_z(rand_axes1);
  }
  multiplex(duration);
  clear_matrix();
}

void mini_snake(){
  unsigned long duration = 50000;
  int a[24] = {0, 1, 2, 3,      3, 3, 3,     7, 11, 15,  15, 15, 15,  14, 13, 12,  12, 12, 12,  8, 4, 0,   0, 0};
  int b[24] = {0, 0, 0, 0,      1, 2, 3,     3,  3,  3,   2,  1,  0,   0,  0,  0,   1,  2,  3,  3, 3, 3,   2, 1};
  int c[24] = {15, 14, 13, 12,  12, 12, 12,  8, 4, 0,     0, 0, 0,    1, 2, 3,      3, 3, 3,    7, 11, 15, 15, 15};
  int d[24] = {3, 3, 3, 3,      2,  1,  0,   0, 0, 0,     1, 2, 3,    3, 3, 3,      2, 1, 0,    0, 0, 0,   1, 2};

  for (int i=0; i<24; i++){
    matrix[b[i]][a[i]] = 1;
    matrix[d[i]][c[i]] = 1;
    multiplex(duration);
    clear_matrix();
  }
}


void propeller(){
  unsigned long duration = 100000;

  line_z(0, 0); 
  line_z(1, 1); 
  line_z(2, 2); 
  line_z(3, 3); 
  multiplex(duration);
  clear_matrix();

  line_z(0, 1); 
  line_z(1, 1); 
  line_z(2, 2); 
  line_z(3, 2); 
  multiplex(duration);
  clear_matrix();

  line_z(0, 2); 
  line_z(2, 1); 
  line_z(1, 2); 
  line_z(3, 1); 
  multiplex(duration);
  clear_matrix();

  line_z(3, 0); 
  line_z(2, 1); 
  line_z(1, 2); 
  line_z(0, 3); 
  multiplex(duration);
  clear_matrix();

  line_z(1, 3); 
  line_z(1, 2); 
  line_z(2, 0); 
  line_z(2, 1); 
  multiplex(duration);
  clear_matrix();

  line_z(2, 3); 
  line_z(2, 2); 
  line_z(1, 0); 
  line_z(1, 1); 
  multiplex(duration);
  clear_matrix();
}

void rundumenand_double(int axis){
  unsigned long duration = 50000;
  int a[12] = {0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 0, 0};
  int b[12] = {0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 2, 1};
  int c[12] = {3, 2, 1, 0, 0, 0, 0, 1, 2, 3, 3, 3};
  int d[12] = {3, 3, 3, 3, 2, 1, 0, 0, 0, 0, 1, 2};

  for (int i=0; i<12; i++){
    if(axis == 1){
      line_x(a[i], b[i]); 
      line_x(c[i], d[i]); 
    }else if(axis == 2){
      line_y(a[i], b[i]); 
      line_y(c[i], d[i]); 
    }else{
      line_z(a[i], b[i]); 
      line_z(c[i], d[i]); 
    }
    multiplex(duration);
    clear_matrix();
  }
}

// spin line
// 1 = around x
// 2 = around y
// everthing else around z
void rundumenand(int axis){
  unsigned long duration = 50000;
  int a[12] = {0, 1, 2, 3, 3, 3, 3, 2, 1, 0, 0, 0};
  int b[12] = {0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 2, 1};

  for (int i=0; i<12; i++){
    if(axis == 1){
      line_x(a[i], b[i]); 
    }else if(axis == 2){
      line_y(a[i], b[i]); 
    }else{
      line_z(a[i], b[i]); 
    }
    multiplex(duration);
    clear_matrix();
  }
}

void roundabout_x(){
  unsigned long duration = 30000;
  int columns[12] = {0, 1, 2, 3, 7, 11, 15, 14, 13, 12, 8, 4};
  // top down
  for(int l = 0; l < 4; l++)
  {
    for(int c = 0; c < 12; c++)
    {
      matrix[l][columns[c]] = 1;
      multiplex(duration);
      clear_matrix();
    }
  }
  // bottom up
  for(int l = 2; l > 0; l--)
  {
    for(int c = 0; c < 12; c++)
    {
      matrix[l][columns[c]] = 1;
      multiplex(duration);
      clear_matrix();
    }
  }
}


void resize(){
  unsigned long duration = 100000;
  matrix[0][0] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[0][1] = 1;
  matrix[0][4] = 1;
  matrix[0][5] = 1;
  matrix[1][0] = 1;
  matrix[1][1] = 1;
  matrix[1][4] = 1;
  matrix[1][5] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[0][1] = 1;
  matrix[0][2] = 1;
  matrix[0][4] = 1;
  matrix[0][6] = 1;
  matrix[0][8] = 1;
  matrix[0][9] = 1;
  matrix[0][10] = 1;

  matrix[2][0] = 1;
  matrix[2][1] = 1;
  matrix[2][2] = 1;
  matrix[2][4] = 1;
  matrix[2][6] = 1;
  matrix[2][8] = 1;
  matrix[2][9] = 1;
  matrix[2][10] = 1;

  matrix[1][0] = 1;
  matrix[1][2] = 1;
  matrix[1][8] = 1;
  matrix[1][10] = 1;

  multiplex(duration);
  clear_matrix();

  line_x(0, 0);
  line_x(0, 3);
  line_x(3, 0);
  line_x(3, 3);
  line_y(0, 0);
  line_y(0, 3);
  line_y(3, 0);
  line_y(3, 3);
  line_z(0, 0);
  line_z(0, 3);
  line_z(3, 0);
  line_z(3, 3);
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[0][1] = 1;
  matrix[0][2] = 1;
  matrix[0][4] = 1;
  matrix[0][6] = 1;
  matrix[0][8] = 1;
  matrix[0][9] = 1;
  matrix[0][10] = 1;

  matrix[2][0] = 1;
  matrix[2][1] = 1;
  matrix[2][2] = 1;
  matrix[2][4] = 1;
  matrix[2][6] = 1;
  matrix[2][8] = 1;
  matrix[2][9] = 1;
  matrix[2][10] = 1;

  matrix[1][0] = 1;
  matrix[1][2] = 1;
  matrix[1][8] = 1;
  matrix[1][10] = 1;
  multiplex(duration);
  clear_matrix();

  matrix[0][0] = 1;
  matrix[0][1] = 1;
  matrix[0][4] = 1;
  matrix[0][5] = 1;
  matrix[1][0] = 1;
  matrix[1][1] = 1;
  matrix[1][4] = 1;
  matrix[1][5] = 1;
  multiplex(duration);
  clear_matrix();

}

void box(int xy, int lay){
  for(int z=lay; z<(lay+2); z++){
    matrix[z][xy] = 1;
    matrix[z][(xy + 1)] = 1;
    matrix[z][(xy + 4)] = 1;
    matrix[z][(xy + 5)] = 1;
  }
}
void box_pattern(){
  unsigned long duration = 100000;
  for(int i=0; i<3; i++){
    box(0, i); multiplex(duration); clear_matrix();
    box(1, i); multiplex(duration); clear_matrix();
    box(2, i); multiplex(duration); clear_matrix();
    box(6, i); multiplex(duration); clear_matrix();
    box(10,i); multiplex(duration); clear_matrix();
    box(9, i); multiplex(duration); clear_matrix();
    box(8, i); multiplex(duration); clear_matrix();
    box(4, i); multiplex(duration); clear_matrix();
  }

  duration = 200000;
  for(int i=0; i<2; i++){
    box(0, 0); multiplex(duration); clear_matrix();
    box(5, 1); multiplex(duration); clear_matrix();
    box(10, 2); multiplex(duration); clear_matrix();
    box(5, 1); multiplex(duration); clear_matrix();
  }
  for(int i=0; i<2; i++){
    box(2, 0); multiplex(duration); clear_matrix();
    box(5, 1); multiplex(duration); clear_matrix();
    box(8, 2); multiplex(duration); clear_matrix();
    box(5, 1); multiplex(duration); clear_matrix();
  }
}

void random_on_all(){
  for(int j=0; j<200; j++){
    int random_layer  = random(0, 4);
    int random_led = random(0, 16);
    if(matrix[random_layer][random_led] == 0){
      matrix[random_layer][random_led] = 1;
      multiplex(50000);
    }
  }
  on_all();
}
void random_off_all(){
  for(int j=0; j<200; j++){
    int random_layer  = random(0, 4);
    int random_led = random(0, 16);
    if(matrix[random_layer][random_led] == 1){
      matrix[random_layer][random_led] = 0;
      multiplex(50000);
    }
  }
  clear_matrix();
}

void spirale(){
  unsigned long duration = 25000;

  for(int l = 0; l < 4; l++)
  {
    for(int c = 0; c < 4; c++)
    {
      matrix[l][c] = 1;
      multiplex(duration);
    }
    for(int c = 2; c <= 4; c++)
    {
      matrix[l][(c * 4) - 1] = 1;
      multiplex(duration);
    }
    for(int c = 14; c >= 12; c--)
    {
      matrix[l][c] = 1;
      multiplex(duration);
    }
    for(int c = 2; c >= 1; c--)
    {
      matrix[l][c * 4] = 1;
      multiplex(duration);
    }
  }


  for(int l = 3; l >= 0; l--)
  {
    for(int c = 0; c < 4; c++)
    {
      matrix[l][c] = 0;
      multiplex(duration);
    }
    for(int c = 2; c <= 4; c++)
    {
      matrix[l][(c * 4) - 1] = 0;
      multiplex(duration);
    }
    for(int c = 14; c >= 12; c--)
    {
      matrix[l][c] = 0;
      multiplex(duration);
    }
    for(int c = 2; c >= 1; c--)
    {
      matrix[l][c * 4] = 0;
      multiplex(duration);
    }
  }

  clear_matrix();
}


void cube_blink(unsigned long duration){
  on_all();
  multiplex(duration);
  clear_matrix();
  multiplex(duration);
}

  
void flicker(){
  // do it a hundred times
  for(int i=0; i<4; i++){
    int led = random(0,16);
    matrix[random(0,4)][led] = 1;
  }
  multiplex(30000);
  clear_matrix();
}


void muster(){
  unsigned long duration = 250000;
  for(int c = 0; c < 4; c++)
  {
    matrix[0][c] = 1;
    matrix[3][c] = 1;
  }
  for(int c = 2; c <= 4; c++)
  {
    matrix[0][(c * 4) - 1] = 1;
    matrix[3][(c * 4) - 1] = 1;
  }
  for(int c = 14; c >= 12; c--)
  {
    matrix[0][c] = 1;
    matrix[3][c] = 1;
  }
  for(int c = 2; c >= 1; c--)
  {
    matrix[0][c * 4] = 1;
    matrix[3][c * 4] = 1;
  }
  matrix[1][0] = 1;
  matrix[2][0] = 1;
  matrix[1][3] = 1;
  matrix[2][3] = 1;

  matrix[1][12] = 1;
  matrix[2][12] = 1;
  matrix[1][15] = 1;
  matrix[2][15] = 1;


  multiplex(duration);
  clear_matrix();

  matrix[1][5] = 1;
  matrix[2][5] = 1;
  matrix[1][6] = 1;
  matrix[2][6] = 1;

  matrix[1][9] = 1;
  matrix[2][9] = 1;
  matrix[1][10] = 1;
  matrix[2][10] = 1;

  multiplex(duration);
  clear_matrix();
}


void clear_matrix(){
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 16; j++){
      matrix[i][j] = 0;
    }
  }
}

void on_all(){
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 16; j++){
      matrix[i][j] = 1;
    }
  }
}

/***************** quer is a pain in the @$$ ********************/

void axes_x(int* a){
  for(int i=0; i<16; i++)
  {
    a[i] = a[i] * 4;
  }
}
void axes_z(int* a){
  for(int i=0; i<16; i++)
  {
    switch(i)
    {
      case 2: case 4: case 7: case 10:
        a[i] = a[i] + 4;
        break;
      case 5: case 8: case 11: case 13:
        a[i] = a[i] + 8;
        break;
      case 9: case 12: case 14: case 15:
        a[i] = a[i] + 12;
        break;
    }
  }
}
void level_x(int* a, int level)
{
  for(int i=0; i<16; i++)
  {
    a[i] = a[i] + level;
  }
}
void level_y(int* a, int level)
{
  for(int i=0; i<16; i++)
  {
    a[i] = a[i] + level * 4;
  }
}
void level_z(int* b, int level)
{
  for(int i=0; i<16; i++)
  {
    b[i] = level;
  }
}
void updown_xy(int* b)
{
  for (int i=0, j=16-1; i<16/2; i++, j--)
  {
    int temp = b[i];
    b[i] = b[j];
    b[j] = temp;
  }
}
void updown_z(int* a)
{
  for(int i=0; i<16; i++)
  {
    switch(i)
    {
      case 0: case 2: case 5: case 9:
        a[i] = a[i] + 3;
        break;
      case 1: case 4: case 8: case 12:
        a[i] = a[i] + 1;
        break;
      case 6: case 10: case 13: case 15:
        a[i] = a[i] - 3;
        break;
      default:
        a[i] = a[i] - 1;
        break;
    }
  }
}


void quer(int onoff, char axes, int level, char leftright, char updown)
{
  int a[16] = {0,   1, 0,   2, 1, 0,   3, 2, 1, 0,   3, 2, 1,   3, 2,   3};
  int b[16] = {0,   0, 1,   0, 1, 2,   0, 1, 2, 3,   1, 2, 3,   2, 3,   3};

  // define axes if other than y
  if(axes == 'x')
  {
    axes_x(a);
  }
  else if(axes == 'z')
  {
    axes_z(a);
  }

  // define level in any case
  switch (axes)
  {
    case 'x':
      level_x(a, level);
      break;
    case 'y':
      level_y(a, level);
      break;
    case 'z':
      level_z(b, level);
      break;
  }

  // bottom up or top down
  if(updown == 'u')
  {
    if(axes == 'x' || axes == 'y')
    {
      updown_xy(b);
    }
    else if(axes == 'z')
    {
      updown_z(a);
    }
  }

  // left to right or vice versa
  // works for x, y and z the same way
  if(leftright == 'r')
  {
    for (int i=0, j=16-1; i<16/2; i++, j--)
    {
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }

  // light the led's
  unsigned long duration = 80000;

  int counter = 0;
  int index   = 0;

  for(int i=0; i<7; i++)
  {
    i < 4 ? counter++ : counter--;
    for(int j=0; j<counter; j++)
    {
      matrix[b[index]][a[index]] = onoff;
      index++;
    }
    multiplex(duration);
  }
}

// the line_* functions take the following arguments:
// x = 0 - 3
// y = 0 - 3
// z = 0 - 3
void line_x(int y, int z){
  for(int i = 0; i < 4; i++){
    matrix[z][y*4+i] = 1;
  }
}
void line_y(int x, int z){
  for(int i = 0; i < 4; i++){
    matrix[z][i*4+x] = 1;
  }
}
void line_z(int x, int y){
  for(int i = 0; i < 4; i++){
    matrix[i][x+(y*4)] = 1;
  }
}
void wand_x(int y){
  for(int i = 0; i < 4; i++){
    line_x(y, i);
  }
}
void wand_y(int x){
  for(int i = 0; i < 4; i++){
    line_y(x, i);
  }
}
void wand_z(int z){
  for(int i = 0; i < 4; i++){
    line_x(i, z);
  }
}
void wand_x_diag(){
  for(int i=0; i<4; i++){
    line_x(i, i);
  }
}

void line_x_diag(int x){
  int layer = 0;
  for(int i = 0; i < 4; i++){
    matrix[layer][(4*x)+i] = 1;
    layer++;
  }
}

void line_y_diag(int y){
  int layer = 0;
  for(int i = 0; i < 4; i++){
    matrix[layer][i*4+y] = 1;
    layer++;
  }
}

void line_z_diag(int z){
  for(int i = 0; i < 4; i++){
    matrix[z][i+(i*4)] = 1;
  }
}


void line_x_diag_2(int x){
  int layer = 0;
  for(int i = 3; i >= 0; i--){
    matrix[layer][(4*x)+i] = 1;
    layer++;
  }
}

void line_y_diag_2(int y){
  int layer = 0;
  for(int i = 3; i >= 0; i--){
    matrix[layer][i*4+y] = 1;
    layer++;
  }
}

void line_z_diag_2(int z){
  for(int i = 0; i < 4; i++){
    matrix[z][(i+1)*3] = 1;
  }
}

/***************************************************/

void multiplex(unsigned long duration){
  unsigned long curr_micros = micros();
  unsigned long until = curr_micros + duration;
  unsigned long prev_micros = curr_micros;

  while(curr_micros <= until){
    if(curr_micros < prev_micros){
      until = curr_micros;
    }
    for(int i = 0; i < 4; i++){
      digitalWrite(latch_pin, LOW);
      for(int j = 0; j < 16; j++){
        digitalWrite(data_pin, matrix[i][j]);
        digitalWrite(clock_pin, HIGH);
        digitalWrite(clock_pin, LOW);
      }
      digitalWrite(latch_pin, HIGH);
      digitalWrite(layers[i], HIGH);
      delayMicroseconds(brightness);
      digitalWrite(layers[i], LOW);
    }
    prev_micros = curr_micros;
    curr_micros = micros();
  }
}
