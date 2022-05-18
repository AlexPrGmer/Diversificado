create database Repaso;
Use repaso;

-- Crear una tabla que contenga las columnas:
-- Identifiacador de farmacia
-- nombre de la farmacia
-- direccion de la farmacia 
-- telefono
-- empleados

create table Farmacia(
	Id_Farmacia integer auto_increment primary key,
    nombre varchar(20),
    direccion varchar(50),
    telefono integer,
    empleados integer
);

insert into Farmacia(nombre, direccion, telefono, empleados)
values ('Farmacia 1','Direccion 1',4321,10);   

insert into Farmacia(nombre, direccion, telefono, empleados)
values ('Farmacia 2','Direccion 2',2562,9);   

insert into Farmacia(nombre, direccion, telefono, empleados)
values ('Farmacia 3','Direccion 3',1157,12);   

select * from Farmacia;    

