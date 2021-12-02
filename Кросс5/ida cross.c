int __cdecl removing_mask_vert(int *a1, int *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int result; // eax
  size_t v8; // eax
  int v9; // [esp+28h] [ebp-50h]
  int v10; // [esp+2Dh] [ebp-4Bh]
  int v11; // [esp+31h] [ebp-47h]
  int v12; // [esp+35h] [ebp-43h]
  __int16 v13; // [esp+39h] [ebp-3Fh]
  char v14; // [esp+3Bh] [ebp-3Dh]
  int v15; // [esp+3Ch] [ebp-3Ch]
  int v16; // [esp+40h] [ebp-38h]
  int v17; // [esp+44h] [ebp-34h]
  int v18; // [esp+48h] [ebp-30h]
  int v19; // [esp+4Ch] [ebp-2Ch]
  int v20; // [esp+50h] [ebp-28h]
  int v21; // [esp+54h] [ebp-24h]
  int v22; // [esp+58h] [ebp-20h]
  int j; // [esp+5Ch] [ebp-1Ch]
  int v24; // [esp+60h] [ebp-18h]
  int i; // [esp+64h] [ebp-14h]
  int v26; // [esp+68h] [ebp-10h]
  int v27; // [esp+6Ch] [ebp-Ch]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v17 = 0;
  v27 = 0;
  v26 = 0;
  i = 0;
  v24 = 0;
  j = 0;
  v9 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v16 = 15;
  v15 = 0;
  if ( *a2 > 14 )
    v5 = v16;
  else
    v5 = *a2;
  v16 = v5;
  v24 = *a2;
  v27 = 0;
  v21 = 0;
  while ( 1 )
  {
    result = v27;
    if ( v27 > a3 )
      break;
    for ( i = 0; i <= v16; ++i )
    {
      v26 = *a1;
      v18 = 0;
      for ( j = 0; j <= 15; *((_BYTE *)&v10 + j++) = *(_BYTE *)(a4 + 35 * (v6 - i) + v24) )
      {
        if ( checking_space_null(a4, v26, v24, i) == 1
          || _isalpha(*(unsigned __int8 *)(a4 + 35 * (v27 + 1) + v24 - 1))
          || _isalpha(*(char *)(a4 + 35 * (v27 + 1) + v24 + 1)) )
        {
          v18 = 1;
        }
        v6 = v26++;
        v15 = v6 - i;
      }
      if ( v18 == 1 )
        break;
      v17 = search_cross_pnt(&v10, &v9, a5, *a1, *a2);
      if ( v17 > v22 )
      {
        v22 = v17;
        v20 = *a1 - i;
        v19 = v24;
        v21 = v9;
      }
    }
    ++v27;
    ++v24;
  }
  if ( v22 )
  {
    result = _isalpha(*(char *)(a4 + 35 * v20 - 35 + v19));
    if ( !result )
    {
      v8 = strlen(*(const char **)(4 * v21 + a5));
      write_vertical(v20, v19, v8, v21, a4, a5);
      *a1 = v20;
      result = (int)a2;
      *a2 = v19;
    }
  }
  return result;
}





int __cdecl removing_mask_horizont(int *a1, int *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int result; // eax
  size_t v8; // eax
  int v9; // [esp+28h] [ebp-50h]
  int v10; // [esp+2Dh] [ebp-4Bh]
  int v11; // [esp+31h] [ebp-47h]
  int v12; // [esp+35h] [ebp-43h]
  __int16 v13; // [esp+39h] [ebp-3Fh]
  char v14; // [esp+3Bh] [ebp-3Dh]
  int v15; // [esp+3Ch] [ebp-3Ch]
  int v16; // [esp+40h] [ebp-38h]
  int v17; // [esp+44h] [ebp-34h]
  int v18; // [esp+48h] [ebp-30h]
  int v19; // [esp+4Ch] [ebp-2Ch]
  int v20; // [esp+50h] [ebp-28h]
  int v21; // [esp+54h] [ebp-24h]
  int v22; // [esp+58h] [ebp-20h]
  int j; // [esp+5Ch] [ebp-1Ch]
  int v24; // [esp+60h] [ebp-18h]
  int i; // [esp+64h] [ebp-14h]
  int v26; // [esp+68h] [ebp-10h]
  int v27; // [esp+6Ch] [ebp-Ch]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v17 = 0;
  v27 = 0;
  v26 = 0;
  i = 0;
  v24 = 0;
  j = 0;
  v9 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v16 = 15;
  v15 = 0;
  if ( *a1 > 14 )
    v5 = v16;
  else
    v5 = *a1;
  v16 = v5;
  v24 = *a1;
  v27 = 0;
  v21 = 0;
  while ( 1 )
  {
    result = v27;
    if ( v27 > a3 )
      break;
    for ( i = 0; i <= v16; ++i )
    {
      v26 = *a2;
      v18 = 0;
      for ( j = 0; j <= 15; *((_BYTE *)&v10 + j++) = *(_BYTE *)(a4 + 35 * v24 + v6 - i) )
      {
        if ( checking_space_one(a4, v24, v26, i) == 1
          || _isalpha(*(char *)(a4 + 35 * (v27 + 1) + v24 + 1))
          || _isalpha(*(unsigned __int8 *)(a4 + 35 * v27 - 35 + v24 + 1)) )
        {
          v18 = 1;
        }
        v6 = v26++;
        v15 = v6 - i;
      }
      if ( v18 == 1 )
        break;
      v17 = search_cross_pnt(&v10, &v9, a5, *a1, *a2);
      if ( v17 > v22 )
      {
        v22 = v17;
        v20 = v24;
        v19 = *a2 - i;
        v21 = v9;
      }
    }
    ++v27;
    ++v24;
  }
  if ( v22 )
  {
    result = _isalpha(*(char *)(a4 + 35 * v20 + v19 - 1));
    if ( !result )
    {
      v8 = strlen(*(const char **)(4 * v21 + a5));
      write_horizantal(v20, v19, v8, v21, a4, a5);
      *a1 = v20;
      result = (int)a2;
      *a2 = v19;
    }
  }
  return result;
}
































