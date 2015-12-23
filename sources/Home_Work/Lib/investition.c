double investition_sum(double sum, double percent)
{
    int year;
    for(year = 0; year <= 4; year++)
    {
        sum = sum + (sum * (percent / 100));
    }
    return(sum);
}

