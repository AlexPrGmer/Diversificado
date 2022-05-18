create database Ejercicio_SQL;
Use Ejercicio_SQL;

create table Colegio (
	Id_Colegio integer auto_increment primary key,
    Nombre_colegio varchar(25),
    Direccion_Colegio varchar(50),
    Telefono integer,
    Numero_maestros integer,
    Numero_grados integer,
    Numero_alumnos integer
    );
    
insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 1','El Tejar',4345,25, 15, 700);   

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 2','Chimaltenango',1717,30, 10, 950);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 3','Buena Vista',3265,15, 7, 350);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 4','Patzicia',8752,21, 15, 650);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 5','Chimaltenango',5621, 30, 17, 1070);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 6','El Tejar',3192,18, 7, 250);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 7','Ciudad Capital', 4536,50, 26, 3500);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Cologio 8','Antigua Guatemala',1268,25, 15, 825);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 9','Buena Vista',7319,14, 11, 150);

insert into Colegio(nombre_colegio, direccion_colegio, telefono, numero_maestros, numero_grados, numero_alumnos)
values ('Colegio 10','Zaragoza',8793,16, 20, 796);

select * from Colegio;
    
    
    
