int calMoney (int use, int money) {
  if(use < 40){
       money = 40;
     }
  if(use >= 100 && use <= 200) {
       use = money - 100;
     }
  if(use >= 300 && use <= 400) {
       use = money + 200;
     }
  return 0;
}

