int get_score(short score, int start, int stop, int now) {
    #include <math.h>
    int a;
    if (start>=now){
        return score;
    }
    if (stop<now){
        a=(int)ceil((double)score/2);
        return a;
    }
    return (int)ceil(score-((double)score/2/(stop-start))*(now-start)); // Not implementation
}