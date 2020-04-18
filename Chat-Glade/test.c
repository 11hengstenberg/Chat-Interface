#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GtkBuilder *gtkBuilder;
    GtkWidget *window;
    gtk_init(&argc, &argv);
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "Chat.glade", NULL);
    window = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "Login"));
    gtk_builder_connect_signals(gtkBuilder, NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(window);
    gtk_main();
    
    return 0;
}

/*Funcion para la pagina de ayuda*/
void on_ayuda_clicked(){
	GtkBuilder *gtkBuilder;
    GtkWidget *ayuda;
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "Chat.glade", NULL);
    ayuda = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "Ayuda"));
    gtk_builder_connect_signals(gtkBuilder, NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(ayuda);
    gtk_main();
	
}

/*Funcion para salir*/
void on_salir_clicked(){
	gtk_main_quit();
}

/*Funcion para entrar a la informacion*/
void on_entrar_clicked(){
	GtkBuilder *gtkBuilder;
    GtkWidget *entrar;
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "Chat.glade", NULL);
    entrar = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "Menu"));
    gtk_builder_connect_signals(gtkBuilder, NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(entrar);
    gtk_main();
	
}

/*Funcion para entrar al chat general*/
void on_chatGeneral_clicked(){
	GtkBuilder *gtkBuilder;
    GtkWidget *chatG;
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "Chat.glade", NULL);
    chatG = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "chat_general"));
    gtk_builder_connect_signals(gtkBuilder, NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(chatG);
    gtk_main();
}

/*Funcion para salir del menu*/
void on_salirMenu_clicked(){
	gtk_main_quit();
}

/*Funcion para regresar al login*/
void on_regresar_clicked(){
	GtkBuilder *gtkBuilder;
    GtkWidget *window;
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "Chat.glade", NULL);
    window = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "Login"));
    gtk_builder_connect_signals(gtkBuilder, NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(window);
    gtk_main();
}

void on_MensajeDirecto_clicked(){
	GtkBuilder *gtkBuilder;
    GtkWidget *chatP;
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "Chat.glade", NULL);
    chatP = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "chat_privado"));
    gtk_builder_connect_signals(gtkBuilder, NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(chatP);
    gtk_main();
}
