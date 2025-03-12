# Write your MySQL query statement below
Select query_name , round(AVG(rating/position) , 2) as quality ,  round(avg(if (rating<3 , 1 , 0)) * 100 , 2) as poor_query_percentage
from queries
Group By query_name