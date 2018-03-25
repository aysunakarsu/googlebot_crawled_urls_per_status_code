clear
reset
unset key
set terminal pngcairo font "verdana,8" size 1200,300
# graph title
set title "URLs crawled by Googlebot by day per status code https://www.example.com/"
set grid y
#y-axis label
set ylabel "# Unique Crawl"
set key invert reverse Left outside
set output "UrlsCrawledByGGbotPerStatusCode.png"
set xtics rotate out
set ytics nomirror
# Select histogram data
set style data histogram
# Give the bars a plain fill pattern, and draw a solid line around them.
set boxwidth 0.75
set style fill solid 1.00 border -1
set style histogram rowstacked
colorfunc(x) = x == 2 ? "green" : x == 3 ? "blue" : x == 4 ? "orange" : x == 5 ? "red": "green"
titlecol(x) = x == 2 ? "200" : x == 3 ? "301" : x == 4 ? "302" : x == 5 ? "404": "200"
plot for [i=2:5] 'googlebotcrawl' using i:xticlabels(1) title titlecol(i) lt rgb colorfunc(i)
