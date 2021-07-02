FROM postgres:latest
ARG DEBIAN_FRONTEND=noninteractive #без ввода


RUN apt-get update
RUN apt-get -y install build-essential qt5-default qtbase5-dev-tools qt5-qmake libqt5sql5-psql postgresql libpq5

ADD init.sql /docker-entrypoint-initdb.d
ADD . .



#Building server app
RUN qmake -o Makefile 
RUN make

EXPOSE 5432
EXPOSE 33333