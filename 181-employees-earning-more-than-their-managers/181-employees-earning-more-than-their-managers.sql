# Write your MySQL query statement below
SELECT emp.name AS Employee
FROM Employee emp JOIN Employee man
ON emp.managerId = man.Id AND emp.salary > man.salary
