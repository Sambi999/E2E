create database sample1;
use sample1;


create table StudentPD(
rollno int primary key,
sname nvarchar(20) not null,
mob_no bigint unique
);
select * from StudentPD;
alter table Studentpd alter column 
sname nvarchar(25) not null;
alter table Studentpd drop column mob_no;
alter table Studentpd add 
mob_no bigint not null;
alter table Studentpd
column
mob_no to mob;
drop table studentpd;
truncate table studentpd;

create table StudentPD(
rollno int primary key,
sname nvarchar(20) not null,
mob_no bigint unique
);
use sample1;
insert into StudentPD values (10001, 'SSS', 8575857587);
insert into StudentPD values (10002, 'PPP', 7855857587);
insert into StudentPD values (10003, 'UUU', 6758958855);
insert into StudentPD (rollno,sname) values (10004, 'VVV');
insert into StudentPD (sname,rollno) values ('TTT', 10050);
insert into StudentPD (sname,rollno) values ('TTT', 10060);



select * from StudentPD;



update StudentPD set mob_no = 9589589569 where rollno = 10004;
update StudentPD set mob_no = 9589589570 where rollno > 10004;



delete StudentPD
where mob_no is null;
delete StudentPD where mob_no = 9589589569;