PGDMP     :                    y            neuralnetworkdatabase    13.2    13.2     �           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            �           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            �           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            �           1262    25335    neuralnetworkdatabase    DATABASE     r   CREATE DATABASE neuralnetworkdatabase WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'Russian_Russia.1251';
 %   DROP DATABASE neuralnetworkdatabase;
                postgres    false            �            1259    25378    report    TABLE     �   CREATE TABLE public.report (
    id_user integer NOT NULL,
    disabled_neurons character varying(10) DEFAULT 0 NOT NULL,
    enabled_layers character varying(7) NOT NULL,
    time_education interval NOT NULL,
    table_report text
);
    DROP TABLE public.report;
       public         heap    postgres    false            �            1259    25363    users_id_seq    SEQUENCE     u   CREATE SEQUENCE public.users_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 #   DROP SEQUENCE public.users_id_seq;
       public          postgres    false            �            1259    25365    users    TABLE     �   CREATE TABLE public.users (
    id integer DEFAULT nextval('public.users_id_seq'::regclass) NOT NULL,
    login character varying(31) NOT NULL,
    password character varying NOT NULL,
    email character varying(63) NOT NULL
);
    DROP TABLE public.users;
       public         heap    postgres    false    200            �          0    25378    report 
   TABLE DATA           i   COPY public.report (id_user, disabled_neurons, enabled_layers, time_education, table_report) FROM stdin;
    public          postgres    false    202          �          0    25365    users 
   TABLE DATA           ;   COPY public.users (id, login, password, email) FROM stdin;
    public          postgres    false    201   +       �           0    0    users_id_seq    SEQUENCE SET     ;   SELECT pg_catalog.setval('public.users_id_seq', 1, false);
          public          postgres    false    200            +           2606    25377    users users_email_key 
   CONSTRAINT     Q   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_email_key UNIQUE (email);
 ?   ALTER TABLE ONLY public.users DROP CONSTRAINT users_email_key;
       public            postgres    false    201            -           2606    25375    users users_login_key 
   CONSTRAINT     Q   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_login_key UNIQUE (login);
 ?   ALTER TABLE ONLY public.users DROP CONSTRAINT users_login_key;
       public            postgres    false    201            /           2606    25373    users users_pkey 
   CONSTRAINT     N   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_pkey PRIMARY KEY (id);
 :   ALTER TABLE ONLY public.users DROP CONSTRAINT users_pkey;
       public            postgres    false    201            0           2606    25385 !   report report_id_user_foreign_key    FK CONSTRAINT     �   ALTER TABLE ONLY public.report
    ADD CONSTRAINT report_id_user_foreign_key FOREIGN KEY (id_user) REFERENCES public.users(id);
 K   ALTER TABLE ONLY public.report DROP CONSTRAINT report_id_user_foreign_key;
       public          postgres    false    2863    201    202            �      x������ � �      �      x������ � �     