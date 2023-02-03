/**
 * Project Untitled
 */


#ifndef _PERMISSION CLASS_H
#define _PERMISSION CLASS_H

class Permission Class {
public: 
    int permission_id;
    int permission_role_id;
    string permission_title;
    string permission_module;
    string permission_description;
    
void addPermission();
    
void editPermission();
    
void deletePermission();
    
void searchPermission();
};

#endif //_PERMISSION CLASS_H