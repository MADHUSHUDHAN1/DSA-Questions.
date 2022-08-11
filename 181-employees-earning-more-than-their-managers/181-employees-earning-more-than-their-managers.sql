# Write your MySQL query statement below
SELECT emp.name AS Employee
FROM Employee emp, Employee man
WHERE emp.managerId = man.Id AND emp.salary > man.salary
