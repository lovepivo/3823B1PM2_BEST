int get_years(int seconds) {
    return 1970+(seconds/(60*60*24*372)); // Not implementation
}

int get_month(int seconds) {
    return (seconds/(60*60*24))%372/31; // Not implementation
}

int get_day(int seconds) {
    return (seconds/(60*60*24))%372%31; // Not implementation
}

int get_hours(int seconds) {
    return seconds/3600%24; // Not implementation
}

int get_minutes(int seconds) {
    return seconds/60%60; // Not implementation
}

int get_seconds(int seconds) {
    return seconds%60; // Not implementation
}


int get_magical_value(int seconds) {
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    return ((year+month)/(1+day+second))*((year+month)/(1+day+second))+((minutes+(minutes/(1+hours)))/(1+hours)); // Not implementation
}