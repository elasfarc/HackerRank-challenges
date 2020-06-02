
//challenge link -> http://hr.gs/3rs0
/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {

    int maximumTotalPrice = 0;

    for(int i = 0;  i < keyboards.size();  i++ ){

        for (int j = 0;  j < drives.size();  j++ ){

        int aPair = (keyboards[i] + drives[j]);

        if( aPair <= b  ){
          
          if( aPair > maximumTotalPrice ) {

             maximumTotalPrice = aPair;
          }
        }
      }
    }

    if(maximumTotalPrice == 0){ maximumTotalPrice = -1; }

    return maximumTotalPrice;
}
