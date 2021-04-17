PGDMP     -    !        
        y            neuralnetworkdatabase    13.2    13.2     ґ           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            µ           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            ¶           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            ·           1262    25335    neuralnetworkdatabase    DATABASE     r   CREATE DATABASE neuralnetworkdatabase WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'Russian_Russia.1251';
 %   DROP DATABASE neuralnetworkdatabase;
                postgres    false            Й            1259    25378    report    TABLE     0  CREATE TABLE public.report (
    login_user character varying NOT NULL,
    time_of_change timestamp without time zone NOT NULL,
    disabled_neurons character varying(10) NOT NULL,
    enabled_layers character varying(7) NOT NULL,
    time_education interval NOT NULL,
    table_report text NOT NULL
);
    DROP TABLE public.report;
       public         heap    postgres    false            К            1259    33724    users    TABLE     «   CREATE TABLE public.users (
    login character varying NOT NULL,
    password character varying NOT NULL,
    email character varying NOT NULL,
    count_uses integer
);
    DROP TABLE public.users;
       public         heap    postgres    false            И            1259    25363    users_id_seq    SEQUENCE     u   CREATE SEQUENCE public.users_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 #   DROP SEQUENCE public.users_id_seq;
       public          postgres    false            °          0    25378    report 
   TABLE DATA           |   COPY public.report (login_user, time_of_change, disabled_neurons, enabled_layers, time_education, table_report) FROM stdin;
    public          postgres    false    201   э       ±          0    33724    users 
   TABLE DATA           C   COPY public.users (login, password, email, count_uses) FROM stdin;
    public          postgres    false    202          ё           0    0    users_id_seq    SEQUENCE SET     ;   SELECT pg_catalog.setval('public.users_id_seq', 1, false);
          public          postgres    false    200            )           2606    33733    users users_email_key 
   CONSTRAINT     Q   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_email_key UNIQUE (email);
 ?   ALTER TABLE ONLY public.users DROP CONSTRAINT users_email_key;
       public            postgres    false    202            +           2606    33731    users users_pkey 
   CONSTRAINT     Q   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_pkey PRIMARY KEY (login);
 :   ALTER TABLE ONLY public.users DROP CONSTRAINT users_pkey;
       public            postgres    false    202            ,           2606    33734    report report_user_login_fkey    FK CONSTRAINT     ‚   ALTER TABLE ONLY public.report
    ADD CONSTRAINT report_user_login_fkey FOREIGN KEY (login_user) REFERENCES public.users(login);
 G   ALTER TABLE ONLY public.report DROP CONSTRAINT report_user_login_fkey;
       public          postgres    false    2859    202    201            °      xњ‹Сгвв Е ©      ±      xњ‹Сгвв Е ©     