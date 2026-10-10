# Write your MySQL query statement below
select st.student_id, st.student_name,s.subject_name ,
sum(if( e.subject_name is null ,0,1) ) as attended_exams
from students as st join subjects as s
left join examinations as e on st.student_id = e.student_id && e.subject_name = s.subject_name group by st.student_id, s.subject_name order by st.student_id, s.subject_name