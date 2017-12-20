/*
  서울지금오전후늘
  열한두세네다여섯
  일곱여덟아홉시월
  와수먹금토요이삼
  사오십일이삼사오
  육칠팔구분월이삼
  사오십일이삼사오
  육칠팔구초일이다
*/

#define BYTE_COUNT 8
#define BYTE_COUNT_HALF 4

//struct mask256{
//  union {
//    struct
//    uint8_t row[BYTE_COUNT];
//  }
//};

unsigned char masks[11][BYTE_COUNT] =
{
  { B11000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//Seoul

  { B00110000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//Now

  { B00001100,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//AM

  { B00001010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//PM

  { B00001001,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//Today
  
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000100,
    B00000000,
    B00000000
  },//Month
  
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000100
  },//Day
  
  { B00000000,
    B00000000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//Hour
  
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00001000,
    B00000000,
    B00000000
  },//Minute
  
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00001000
  },//Second
  
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000011
  }//Copula is
};


unsigned char masksNumbersA[11][BYTE_COUNT] = 
{
  { B00000000,
    B01000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 1

  { B00000000,
    B00100000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 2

  { B00000000,
    B00010000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 3

  { B00000000,
    B00001000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 4

  { B00000000,
    B00000101,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 5

  { B00000000,
    B00000011,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 6

  { B00000000,
    B00000000,
    B11000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 7

  { B00000000,
    B00000000,
    B00110000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 8

  { B00000000,
    B00000000,
    B00001100,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//C 9

  { B00000000,
    B10000000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  }//C 10s
};//end of masksNumbersV

unsigned char masksNumbersB[14][BYTE_COUNT] = 
{
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  },//B 1

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00001000,
    B00000000,
    B00000000,
    B00000000
  },//B 2

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000100,
    B00000000,
    B00000000,
    B00000000
  },//B 3

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000010,
    B00000000,
    B00000000,
    B00000000
  },//B 4

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000001,
    B00000000,
    B00000000,
    B00000000
  },//B 5

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B10000000,
    B00000000,
    B00000000
  },//B 6

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01000000,
    B00000000,
    B00000000
  },//B 7

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00100000,
    B00000000,
    B00000000
  },//B 8

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00010000,
    B00000000,
    B00000000
  },//B 9
  
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00100000,
    B00000000,
    B00000000,
    B00000000
  },//B 10s

  { B00000000,
    B00000000,
    B00000000,
    B00000010,
    B00100000,
    B00000000,
    B00000000,
    B00000000
  },//B 20s

  { B00000000,
    B00000000,
    B00000000,
    B00000001,
    B00100000,
    B00000000,
    B00000000,
    B00000000
  },//B 30s

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B10100000,
    B00000000,
    B00000000,
    B00000000
  },//B 40s

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01100000,
    B00000000,
    B00000000,
    B00000000
  }//B 50s
};//end of masksNumbersB

unsigned char masksNumbersC[14][BYTE_COUNT] = 
{
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00010000,
    B00000000
  },//C 1

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00001000,
    B00000000
  },//C 2

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000100,
    B00000000
  },//C 3

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000010,
    B00000000
  },//C 4

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000001,
    B00000000
  },//C 5

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B10000000
  },//C 6

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01000000
  },//C 7

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00100000
  },//C 8

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00010000
  },//C 9
  
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00100000,
    B00000000
  },//C 10s

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000010,
    B00100000,
    B00000000
  },//C 20s

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000001,
    B00100000,
    B00000000
  },//C 30s

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B10100000,
    B00000000
  },//C 40s

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01100000,
    B00000000
  }//C 50s
};//end of masksNumbersC

unsigned char masksMonths[12][BYTE_COUNT] =
{
  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00010000,
    B00000100,
    B00000000,
    B00000000
  },//January

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00001000,
    B00000100,
    B00000000,
    B00000000
  },//February

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000100,
    B00000100,
    B00000000,
    B00000000
  },//March

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000010,
    B00000100,
    B00000000,
    B00000000
  },//April

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000001,
    B00000100,
    B00000000,
    B00000000
  },//May

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B10000100,
    B00000000,
    B00000000
  },//June

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01000100,
    B00000000,
    B00000000
  },//July

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00100100,
    B00000000,
    B00000000
  },//August

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00010100,
    B00000000,
    B00000000
  },//September

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00100000,
    B00000100,
    B00000000,
    B00000000
  },//October

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00110000,
    B00000100,
    B00000000,
    B00000000
  },//November

  { B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00101000,
    B00000100,
    B00000000,
    B00000000
  }//December
};//end of masksMonths

unsigned char masksWeekday[7][BYTE_COUNT] = 
{
  { B00000000,
    B00000000,
    B10000000,
    B00000100,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  },//Sunday

  { B00000000,
    B00000000,
    B00000001,
    B00000100,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  },//Monday

  { B00000000,
    B00000000,
    B00000000,
    B10000100,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  },//Tuesday

  { B00000000,
    B00000000,
    B00000000,
    B01000100,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  },//Wednesday

  { B00000000,
    B00000000,
    B00000000,
    B00100100,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  },//Thursday

  { B00000000,
    B00000000,
    B00000000,
    B00010100,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  },//Friday

  { B00000000,
    B00000000,
    B00000000,
    B00001100,
    B00010000,
    B00000000,
    B00000000,
    B00000000
  }//Saturday
};//end of masksWeekday

unsigned char masksHours[12][BYTE_COUNT] =
{
  { B00000000,
    B01000000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//1 o'clock

  { B00000000,
    B00100000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//2 o'clock

  { B00000000,
    B00010000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//3 o'clock

  { B00000000,
    B00001000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//4 o'clock

  { B00000000,
    B00000101,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//5 o'clock

  { B00000000,
    B00000011,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//6 o'clock

  { B00000000,
    B00000000,
    B11000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//7 o'clock

  { B00000000,
    B00000000,
    B00110010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//8 o'clock

  { B00000000,
    B00000000,
    B00001110,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//9 o'clock

  { B00000000,
    B10000000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//10 o'clock

  { B00000000,
    B11000000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },//11 o'clock
  
  { B00000000,
    B10100000,
    B00000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  }//12 o'clock
};//end masksHours
