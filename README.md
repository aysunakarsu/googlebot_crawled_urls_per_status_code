# googlebot_crawled_urls_per_status_code
Below is the format of the logs which bash shell scripts analyze web server logs 

66.249.75.127 - - [01/Aug/2016:17:43:15 -0400] "GET /contact/ HTTP/1.1" 200 2630 "-" "Mozilla/5.0 (compatible; Googlebot/2.1; +http://www.google.com/bot.html)"

The commands which are used to parse and extract data from the web server log files and the graph obtained by using that input finally are as follows:

1) Preparing the input file for the graph, at command line which will create file; googlebotcrawl 

source urls_crawled_by_googlebot.sh

2) Below command  will create an image file; UrlsCrawledByGGbotPerStatusCode.png 

gnuplot histogram_googlebot_crawl.p

 3) Now you can visualize your image at command line 
 
 xdg-open UrlsCrawledByGGbotPerStatusCode.png
 
 You can find more information on this blog post 
 
 https://www.searchdatalogy.com/blog/technical-seo-log-analysis/
