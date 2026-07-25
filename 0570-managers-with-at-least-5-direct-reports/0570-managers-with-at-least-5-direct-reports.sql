# Write your MySQL query statement below
select name
from employee
where id IN (
    select managerId
    from employee
    where managerId is not null
    group by managerId
    
    HAVING count(*) >= 5
);