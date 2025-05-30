# Write your MySQL query statement below
select a1.machine_id, ROUND(AVG(a2.timestamp - a1.timestamp),3) as processing_time
from activity a1
inner join activity a2
on a1.process_id = a2.process_id
and a1.machine_id = a2.machine_id
and a2.timestamp > a1.timestamp
group by a1.machine_id