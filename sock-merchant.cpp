/* challenge link -> http://hr.gs/eabbdd
function returns @numPairs :
calculate how many pieces of each @color and store it @eachColorCounter */

//Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {

    int numPairs = 0;
    int eachColorCounter = 0;
    for(int i = 0; i < ar.size(); ++i){

      if(ar[i] != 0){  // ar[i] == 0 -> @color already counted
        int color = ar[i];

        for(int j = 0; j < ar.size() ; j++){

          if(color == ar[j]  ) {
            eachColorCounter+=1;
            ar[j] = 0;
          }

        }//ineer loop

        numPairs += eachColorCounter / 2;
        eachColorCounter = 0;

      }
    }//outer loop

   return numPairs;

}
