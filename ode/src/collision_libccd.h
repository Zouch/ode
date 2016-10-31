/*************************************************************************
 *                                                                       *
 * Open Dynamics Engine, Copyright (C) 2001,2002 Russell L. Smith.       *
 * All rights reserved.  Email: russ@q12.org   Web: www.q12.org          *
 *                                                                       *
 * This library is free software; you can redistribute it and/or         *
 * modify it under the terms of EITHER:                                  *
 *   (1) The GNU Lesser General Public License as published by the Free  *
 *       Software Foundation; either version 2.1 of the License, or (at  *
 *       your option) any later version. The text of the GNU Lesser      *
 *       General Public License is included with this library in the     *
 *       file LICENSE.TXT.                                               *
 *   (2) The BSD-style license that is included with this library in     *
 *       the file LICENSE-BSD.TXT.                                       *
 *                                                                       *
 * This library is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the files    *
 * LICENSE.TXT and LICENSE-BSD.TXT for more details.                     *
 *                                                                       *
 *************************************************************************/

#ifndef _LIBCCD_COLLISION_H_
#define _LIBCCD_COLLISION_H_

int dCollideCylinderCylinder(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideBoxCylinderCCD(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideCapsuleCylinder(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideConvexBoxCCD(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideConvexCapsuleCCD(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideConvexCylinderCCD(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideConvexSphereCCD(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideConvexConvexCCD(dxGeom *o1, dxGeom *o2, int flags, dContactGeom *contact, int skip);

int dCollideConvexTrimeshTrianglesCCD(dxGeom *o1, dxGeom *o2, int* indices, int numindices, int flags, dContactGeom *contact, int skip);

#endif /* _LIBCCD_COLLISION_H_ */
